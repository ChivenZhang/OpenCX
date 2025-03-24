#include <iostream>
#if 1
#include "MyObject.meta.h"
CLASST(float);
CLASST(String);

int main()
{
    auto obj = Class::New<MyObject>();

    Class::Set<MyObject, String>("Name", obj.get(), "你好");
    Class::SetStatic<MyObject, String>("SName", "世界");

    PRINT("get Name:", *Class::Get<MyObject, String>("Name", obj.get()));
    PRINT("get SName:", *Class::GetStatic<MyObject, String>("SName"));

    Class::Call<MyObject, void>("Foo", obj.get());
    Class::Call<MyObject, void, String>("Foo", obj.get(), "Hello");
    Class::Call<MyObject, void, String, float>("Foo", obj.get(), "Hello", 123.0f);

    Class::CallStatic<MyObject, void>("SFoo");
    Class::CallStatic<MyObject, void, String>("SFoo", "World");
    Class::CallStatic<MyObject, void, String, float>("SFoo", "World", 456.0f);

    MyObject::SubObject sub;
    PRINT("get SubObject::SubName:", *Class::Get<MyObject::SubObject, int>("SubName", &sub));
    PRINT("get SubObject::SSubName:", *Class::GetStatic<MyObject::SubObject, const int>("SSubName"));

    return 0;
}

#else

#include "MyObject.h"

int main()
{
    MyObject obj;
    return 0;
}

#endif
