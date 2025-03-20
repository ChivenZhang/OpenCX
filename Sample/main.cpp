#include <iostream>
#include "MyObject.h"

int main()
{
    auto obj = ClassT<MyObject>::New();

    auto fields = obj->getClass()->getFields();
    auto methods = obj->getClass()->getMethods();

    ClassT<MyObject>::Call<void>("Foo(String)", obj.get(), String("Hello"));
    ClassT<MyObject>::SCall<void>("SFoo(String)", String("World"));

    auto name = ClassT<MyObject>::Get<String>("Name", obj.get());
    PRINT(*name);
    auto sname = ClassT<MyObject>::SGet<String>("SName");
    PRINT(*sname);

    Recycle::Get().clear();
    return 0;
}
