# Approx

A simple c++ class that allows approximate comparison.
Written primarily as a teaching example.
Useful in testing frameworks.

See example.cpp for a working example.

There are two methods for approximate comparison:

* a

```cpp
a == Approx(b).del(d) // will check if |a - b| <= d
```

```cpp
a == Approx(b).eps(e) // will check if |(a - b)/b| <= e
```

The default is a delta comparison, with delta = 1.0e-14.

```cpp
a == Approx(b) // will check if |(a - b)/b| <= 1.0e-14
```

The following will all evaluate to `true`:

```cpp
  20.0 == Approx(25.0).del(10.0);

  -20.0 == Approx(-25.0).del(10.0);

  20.0 == Approx(25.0).eps(0.3);

  -20.0 == Approx(-25.0).eps(0.3);

  20.0 + 1.0e-15 == Approx(20.0);
```

While the following will all evaluate to `false`:

```cpp
  20.0 == Approx(25.0).del(1.0);

  20.0 == Approx(-25.0).del(10.0);

  20.0 == Approx(25.0).eps(0.01);

  20.0 == Approx(25.0).eps(0.1);

  20.0 == Approx(-25.0).eps(0.3);

  20.0 + 1.0e-13 == Approx(20.0);
```
