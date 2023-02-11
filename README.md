# aether

A mediæval magical tool for C type introspection

## Abstract

In the C language, there is no way to introspect information off of a type. You can use functions to manage and handle that data, however,
that information is not stored likewise in an object manner. Take the four primitive types for example: `char`, `int`, `float` and `void`.
You can use `strlen()` on a `char` type to determine its length, but that length isn't naturally provided to you in a simpler manner. Other
types follow an atypical nature that adds one extra step for the developer.

Additionally, C struggles from being able to safely compare two types if they're distinct.

```c
struct Foo {
  char[]  bar;
  size_t  baz;
  int     set;
};

struct Foo {
  char    bar; // this type was changed.
  size_t  baz;
  int     set;
};

// Now, how do we compare both types' identifiers? Despite retaining baz and set, bar has changed.
// If we compared the struct types themselves, we'll obviously know they're different.
// But that will always happen, *even* if the identifier types are identical.
```

The objectivity of aether is to remove the need of grotesque definition macros and preprocessors to handle conditional handling of whether
types are different and their structure; and how the type of it is handled.
