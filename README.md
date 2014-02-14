CODBC ::  An Introduction
=====

`CODBC` is an _open source `C++` API for `Pro*C`_. If you try to connect `C++` with `Oracle SQL` then you have two options, `OCCI` or `Pro*C`. `Pro*C` is the oldest way through which you can connect your `C++` code with `Oracle SQL`. `OCCI` was introduced with `Oracle 9i`, but `Pro*C` has been there long before that. Well, there is not much support over internet for `Pro*c` as much as you can find for `OCCI` or any other tool or API for `C++` and Oracle Connection. `Pro*C` has a complete different approach towards making this bridge between `Oracle SQL` and `C++`.

`CODBC` provides you with inbuilt classes and functions similar to `OCCI`. Writing a program over `Pro*C` is not as simple as writing a normal program in `C++`. Though it is not that difficult, but it is not even a piece of cake. If you are newbie to coding and want your `C++` application to interact with `Oracle SQL`, you can use `CODBC`. But before you use `CODBC`, you have to install `Pro*C` and configure your `Oracle SQL` with `Pro*C`. If you are one of the programmers working on some legacy systems, then `CODBC` will serve you as a loyal friend and you will love to add `CODBC` classes to your code for better and easy implementation.

###Benefits of using `CODBC` over conventional `Pro*C`
Before this, I would explain you the mechanism of writing Pro*C code:
* Unlike `C++`, `Pro*C` codes are not written in `C++` files. Rather they are written in `.pc` files.
* After writing the complete code in `.pc` file, the file is compiled using _Oracle Precompiler_ to get respected `.cpp` files.
* The `.cpp` file which you get after compiling the `.pc` file will be completely changed, and you won't get much out of the file. It will be all `struct`s. Your 40 line code will change to 380 lines code.
* Now, you need to compile this `.cpp` file again to get the respective executable file.
In this process, you might get error when compiling `.pc` file, but _Oracle Pre-compiler_ do not check for `C++` code error. Moreover it just translates the `Pro*c` code to give a `.cpp` file.

Coming to the benefits of `CODBC`:
* Create a `.cpp` file, and start as you start with normal `C++` program.
* Include all the `header` files for `CODBC`, namely `SQLHelper.h` and `SQLHelperException.h`. Create an object of `SQLHelper` class and use the function calls from `SQLHelper` to process all the database related operations.
* Compile the `.cpp` file to get the executable. No need to write any `.pc` file.
