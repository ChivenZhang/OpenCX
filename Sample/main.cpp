#include <OpenCX/Class.h>
#include "test.meta.h"

int main()
{
    auto obj = Class::New<MyObject>();

    PRINT(Class::Get<ObjectT<MyObject>>()->getName());

    // Access field

    PRINT(Class::Get<void>()->getName());

    Class::Set<MyObject, String>("Name", obj.get(), "你好");
    Class::SetStatic<MyObject, String>("SName", "世界");

    PRINT("get Name:", *Class::Get<MyObject, String>("Name", obj.get()));
    PRINT("get SName:", *Class::GetStatic<MyObject, String>("SName"));

    // Access method

    Class::Call<MyObject, void>("Foo", obj.get());
    Class::Call<MyObject, void, String>("Foo", obj.get(), "Hello");
    Class::Call<MyObject, void, String, float>("Foo", obj.get(), "Hello", 123.0f);

    Class::CallStatic<MyObject, void>("SFoo");
    Class::CallStatic<MyObject, void, String>("SFoo", "World");
    Class::CallStatic<MyObject, void, String, float>("SFoo", "World", 456.0f);

    // Access inner class

    MyObject::InnerObject inObj;
    PRINT("get InnerObject::SubName:", *Class::Get<MyObject::InnerObject, int>("SubName", &inObj));
    PRINT("get InnerObject::SSubName:", *Class::GetStatic<MyObject::InnerObject, const int>("SSubName"));

    // Access subclass

    MySubObject subObj;
    Class::Call<MyObject, void>("VFoo", &subObj);
    Class::Call<MySubObject, void>("VFoo", &subObj);
    Class::Call<MyObject, void, int>("VFoo", &subObj, 123);
    Class::Call<MySubObject, void, int>("VFoo", &subObj, 456);

    return 0;
}
