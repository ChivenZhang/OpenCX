#include <iostream>
#if 1
#include "MyObject.meta.h"
CLASST(float);
CLASST(String);

int main()
{
    auto obj = ClassT<MyObject>::New();

    PRINT("get Name:", *ClassT<MyObject>::Get<String>("Name", obj.get()));
    PRINT("get SName:", *ClassT<MyObject>::GetStatic<String>("SName"));

    ClassT<MyObject>::Set<String>("Name", obj.get(), "你好");
    ClassT<MyObject>::SetStatic<String>("SName", "世界");

    PRINT("get Name:", *ClassT<MyObject>::Get<String>("Name", obj.get()));
    PRINT("get SName:", *ClassT<MyObject>::GetStatic<String>("SName"));

    ClassT<MyObject>::Call<void, String, float>("Foo", obj.get(), "Hello", 123.0f);
    ClassT<MyObject>::CallStatic<void, String, float>("SFoo", "World", 456.0f);

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
