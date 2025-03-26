#include <OpenCX/Class.h>
#include "MyObject.meta.h"

int main()
{
    auto obj = Class::New<MyObject>();

    PRINT("\n>>ACCESS METADATA<<");
    PRINT("name:", obj->getClass()->getName());
    for (auto& b : obj->getClass()->getBases()) PRINT("\tbase:", b->getName());
    for (auto& f : obj->getClass()->getFields()) PRINT("\tfield:", f.Name, f.Type);
    for (auto& f : obj->getClass()->getSFields()) PRINT("\tstatic field:", f.Name, f.Type);
    for (auto& m : obj->getClass()->getMethods()) PRINT("\tmethod:", m.Name, m.Type);
    for (auto& m : obj->getClass()->getSMethods()) PRINT("\tstatic method:", m.Name, m.Type);

    // Access field

    PRINT("\n>>ACCESS FIELD<<");
    Class::Set<MyObject, String>("Name", obj.get(), "Hello");
    Class::SetStatic<MyObject, String>("SName", "World");
    PRINT("get Name:", *Class::Get<MyObject, String>("Name", obj.get()));
    PRINT("get SName:", *Class::GetStatic<MyObject, String>("SName"));

    // Access method

    PRINT("\n>>ACCESS METHOD<<");
    Class::Call<MyObject, void>("Foo", obj.get());
    Class::Call<MyObject, void, String const&>("Foo", obj.get(), "Hello");
    Class::Call<MyObject, void, String const&, float>("Foo", obj.get(), "Hello", 123.0f);
    Class::CallStatic<MyObject, void>("SFoo");
    Class::CallStatic<MyObject, void, String const&>("SFoo", "World");
    Class::CallStatic<MyObject, void, String const&, float>("SFoo", "World", 456.0f);

    // Access inner class

    PRINT("\n>>ACCESS INNER CLASS<<");
    MyObject::InnerObject inObj;
    PRINT("get InnerObject::SubName:", *Class::Get<MyObject::InnerObject, int>("SubName", &inObj));
    PRINT("get InnerObject::SSubName:", *Class::GetStatic<MyObject::InnerObject, const int>("SSubName"));

    // Access subclass

    PRINT("\n>>ACCESS SUB CLASS<<");
    MySubObject subObj;
    Class::Call<MyObject, void>("VFoo", &subObj);
    Class::Call<MySubObject, void>("VFoo", &subObj);
    Class::Call<MyObject, void, int>("VFoo", &subObj, 123);
    Class::Call<MySubObject, void, int>("VFoo", &subObj, 456);

    return 0;
}
