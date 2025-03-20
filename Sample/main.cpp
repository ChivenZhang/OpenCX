#include <iostream>
#include "MyObject.meta.h"

int main()
{
    auto obj = ClassT<MyObject>::New();

    ClassT<MyObject>::Call<void>("Foo(String)", obj.get(), String("Hello"));
    ClassT<MyObject>::SCall<void>("SFoo(String)", String("World"));

    auto name = ClassT<MyObject>::Get<String>("Name", obj.get());
    PRINT("get Name:", *name);
    auto sname = ClassT<MyObject>::SGet<String>("SName");
    PRINT("get SName:", *sname);

    return 0;
}
