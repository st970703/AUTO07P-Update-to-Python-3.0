# AUTO-07-Update-to-Python-3.0
the code for auto is available at  
https://sourceforge.net/projects/auto-07p/files/  

AUTO-07P :
CONTINUATION AND BIFURCATION SOFTWARE
FOR ORDINARY DIFFERENTIAL EQUATIONS
http://www.dam.brown.edu/people/sandsted/auto/auto07p.pdf

Some commands:  
plot(run("couple"))  
auto("couple2.auto")  

This repository contains the auto code that has been modified to run with Python 3 and matplotlib version 2.0.   
THe changes in the python code include reconfiguring the imports and the packaging.  

The matplotlib zooming and the inderError problems have been fixed.  
This can be found in the related repository.  

However, 'AUTO Runtime Error: Solution without data.' appears after the changes.  
It appears whenever a .auto or a "couple" file is run.

Detail of the error:
```
AUTO> auto("couple2.auto")
couple2.auto, line 1:

AUTO Runtime Error: Solution without data.
```

According to the auto documentation, this error shows that auto has crashed and is related to the internal of auto.  
Deeper understanding of the auto code, especially the non-python parts is required.  

