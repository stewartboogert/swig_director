* g++ -std=c++17 -c line.cxx
* g++ -std=c++17 -c element.cxx
* g++ -std=c++17 -o main  main.cxx element.o line.o 
* swig -c++ -python -directors -module line line.i
* swig -c++ -python -directors -module element element.i
* g++ -fPIC -c line_wrap.cxx -I/opt/homebrew/opt/python@3.12/Frameworks/Python.framework/Versions/3.12/include/python3.12
* g++ -fPIC -c element_wrap.cxx -I/opt/homebrew/opt/python@3.12/Frameworks/Python.framework/Versions/3.12/include/python3.12
*  g++ -shared line_wrap.o line.o -o _line.so -L/opt/homebrew/opt/python@3.12/Frameworks/Python.framework/Versions/3.12/lib/ -lpython3.12
* g++ -shared element_wrap.o element.o -o _element.so -L/opt/homebrew/opt/python@3.12/Frameworks/Python.framework/Versions/3.12/lib/ -lpython3.12