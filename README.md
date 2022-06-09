# Logger

Logger is a lib which you can link with your source 
code to log in Excel sheet with the current time 

------
how to build ?
------

### **build Library**

1.
```
cd LoggerLib
```
2. 
```
make
```
3.
```
cp build/liblogger.a ../app
```
### **Build app**

1.
```
cd ../app
```
2. 
```
make
```
3.
```
./build/app
```
---------------

## Using in Custom App 

### Steps 
>1-generate liblogger.a and copy to source code

>2-make folder called inc

>3-copy headers to inc 

- Logger.hpp 

- IExcel.hpp 

- ExcelManger.hpp


>4-compile 

```
	g++ main.c  -o executable -I inc/ -pthread -llogger -L .

```

- -L location of library < liblogger.a >
- -I includes 
- -llogger name of lib

![image](https://user-images.githubusercontent.com/66727825/172955130-44446aa4-fa05-417c-a1f2-df0cae685d18.png)

----

![image](https://user-images.githubusercontent.com/66727825/172955172-f2f35e4e-e7b3-40f4-bc41-8b3a2ceb8c8b.png)


----

![image](https://user-images.githubusercontent.com/66727825/172955228-dadd708a-d5e4-44ad-98c9-244f55ef2d7a.png)


