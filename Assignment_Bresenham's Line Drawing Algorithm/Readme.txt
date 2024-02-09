if |m| >= 1: means the line is more vertical than horizontal.In this case, the algorithm goes each y coordinate,  calculates the corresponding x coordinate,and plots the pixel at that (x, y) position.

p(decision parameter) is initialized as 2*dx - dy.

If p >=0 , the x coordinate is incremented and p is updated as p + 2*dx - 2*dy. 

Else p is updated as p + 2*dx. x stays same as previous.

The y coordinate is always incremented until the end point is reached.