====================================
TODO List
====================================
1. Support lua function converted **automatically** to C function interface,
if we coding as below

    foo(..., function () print("this is one lua function") end)

2. Support lua string converted **automatically** to that matched argument that
wx function required one wxString related:
For example:
wx code:
	
    foo(const wxString& str) { ... }

lua code:
 
    foo('this is one lua string')

3. more??

========
Zero.Li
