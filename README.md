CODBC ::  An Introduction
=====

`CODBC` is an _open source `C++` API for `Pro*C`_. If you try to connect `C++` with `Oracle SQL` then you have two options, `OCCI` or `Pro*C`. `OCCI` is the best that anyone would recommend, even I would also recommend you to go for `OCCI`, it has all the required built-in classes and functions that would make your product the best and robust.

Now let me tell you about `Pro*c`, `Pro*C` is the oldest way through which you can connect your `C++` code with `Oracle SQL`. `OCCI` was introduced with `Oracle 9i`, but `Pro*C` has been there long before that. Well, there is not much support over internet for `Pro*c` as much as you can find for `OCCI` or any other tool or API for `C++` and Oracle Connection. `Pro*C` has a complete different approach towards making this bridge between `Oracle SQL` and `C++`. I will talk later about `Pro*C` methods and technologies. Well by now, you are aware that you have two good options to connect `C++` and Oracle, `Pro*C` and `OCCI`.

###Why to use Pro*C###
By reading the above information you would think **Why to use Pro*C when we have OCCI?**. True, you can use `OCCI`, even I would suggest you to so. But, let me remind you, **"_`OCCI` was introduced with `Oracle 9i`_"**; Now imagine what was before? Yes, it was Pro*C. _Any technology or method never dies_.

Why are we using `Pro*C`? - The reason is more financial than technical, actually there are some systems which still use `Pro*C`. Actually, these systems were installed along with the foundation of complete Information Technology Industries; And the cost of migrating or upgrading these systems are much high than maintaining these systems. These systems are known as Legacy Systems. `Pro*C` is mainly used with Legacy Systems. Most of the IT industries provide support to such legacy systems, and there they require Pro*C.

Apart from the financial reason, if we have our look to the `Pro*C` Technology compared with that of `OCCI`, then Pro*C is much easy to use than `OCCI`. Although `OCCI` provides a robust application which is difficult to achieve using `Pro*C`; but while implementing `OCCI` you might feel it little difficult to deal with web of classes and function. `Pro*C` is much easier to handle as compared to `OCCI`.

***

##What is CODBC##
`CODBC` _(or C++ Oracle Database Connection)_ is an open source API for `Pro*C`. `CODBC` provides you with inbuilt classes and functions similar to `OCCI`. Writing a program over `Pro*C` is not as simple as writing a normal program in `C++`. Though it is no that difficult, but it is not even a piece of cake. If you are newbie to coding and want your `C++` application to interact with `Oracle SQL`, you can use `CODBC`. But before you use `CODBC`, you have to install `Pro*C` and configure your `Oracle SQL` with `Pro*C`. If you are one of the programmers working on some legacy systems, then `CODBC` will serve you as a loyal friend and you will love to add `CODBC` classes to your code for better and easy implementation.

###Benefit of using CODBC over conventional Pro*C###
I guess, now we have discussed the major part of conflict between _"using Pro*C"_ and _"not using Pro*C"_. Before this, I would explain you the mechanism of writing Pro*C code:
* Unlike `C++`, `Pro*C` codes are not written in `C++` files. Rather they are written in `.pc` files.
* After writing the complete code in `.pc` file, the file is compiled using _Oracle Precompiler_ to get respected `.cpp` files.
* The `.cpp` file which you get after compiling the `.pc` file will be completely changed, and you won't get much out of the file. It will be all `struct`s. Your 40 line code will change to 380 lines code.
* Now, you need to compile this `.cpp` file again to get the respective executable file.
In this process, you might get error when compiling `.pc` file, but _Oracle Pre-compiler_ do not check for `C++` code error. Moreover it just translates the `Pro*c` code to give a `.cpp` file.

Coming to the benefits of `CODBC`:
* Create a `.cpp` file, and start as you start with normal `C++` program.
* Include all the `header` files for `CODBC`, namely `SQLHelper.h` and `SQLHelperException.h`. Create an object of `SQLHelper` class and use the function calls from `SQLHelper` to process all the database related operations.
* Compile the `.cpp` file to get the executable. No need to write any `.pc` file.
