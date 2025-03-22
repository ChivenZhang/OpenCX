#include <iostream>
#include "MyObject.meta.h"

int main()
{
    auto obj = ClassT<MyObject>::New();

    ClassT<MyObject>::Call<void, String, float>("Foo", obj.get(), "Hello", 123.0f);

    ClassT<MyObject>::Call<void, String, float>("Foo(String,float)", obj.get(), "Hello", 123.0f);

    ClassT<MyObject>::CallStatic<void, String, float>("SFoo(String,float)", "World", 456.0f);
    auto name = ClassT<MyObject>::Get<String>("Name", obj.get());
    PRINT("get Name:", *name);
    auto sname = ClassT<MyObject>::GetStatic<String>("SName");
    PRINT("get SName:", *sname);

    ClassT<MyObject>::Call<void, String, float>("Foo2(String,float)", obj.get(), "Hello", 123.0f);
    ClassT<MyObject>::CallStatic<void, String, float>("SFoo2(String,float)", "World", 456.0f);
    name = ClassT<MyObject>::Get<String>("Name2", obj.get());
    PRINT("get Name2:", *name);
    sname = ClassT<MyObject>::GetStatic<String>("SName2");
    PRINT("get SName2:", *sname);

    return 0;
}
