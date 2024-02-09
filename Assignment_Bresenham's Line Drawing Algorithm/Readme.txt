if |m| >= 1: means the line is more vertical than horizontal.In this case, the algorithm goes each y coordinate,  calculates the corresponding x coordinate,and plots the pixel at that (x, y) position.

p(decision parameter) is initialized as 2*dx - dy.

If p >=0 , the x coordinate is incremented and p is updated as p + 2*dx - 2*dy. 

Else p is updated as p + 2*dx. x stays same as previous.

The y coordinate is always incremented until the end point is reached.



<h2>Table 1: Output of (1,1) &amp; (4,8)</h2>
<table>
  <tr>
    <th>Step</th>
    <th>Point</th>
  </tr>
  <tr>
    <td>Initial</td>
    <td>(1,1)</td>
  </tr>
  <tr>
    <td>1</td>
    <td>(1,2)</td>
  </tr>
  <tr>
    <td>2</td>
    <td>(2,3)</td>
  </tr>
  <tr>
    <td>3</td>
    <td>(2,4)</td>
  </tr>
  <tr>
    <td>4</td>
    <td>(3,5)</td>
  </tr>
  <tr>
    <td>5</td>
    <td>(3,6)</td>
  </tr>
  <tr>
    <td>6</td>
    <td>(4,7)</td>
  </tr>
  <tr>
    <td>7</td>
    <td>(4,8)</td>
  </tr>
</table>

<h2>Table 2: Output of (1,1) &amp; (8,4)</h2>
<table>
  <tr>
    <th>Step</th>
    <th>Point</th>
  </tr>
  <tr>
    <td>Initial</td>
    <td>(1,1)</td>
  </tr>
  <tr>
    <td>1</td>
    <td>(2,1)</td>
  </tr>
  <tr>
    <td>2</td>
    <td>(3,2)</td>
  </tr>
  <tr>
    <td>3</td>
    <td>(4,2)</td>
  </tr>
  <tr>
    <td>4</td>
    <td>(5,3)</td>
  </tr>
  <tr>
    <td>5</td>
    <td>(6,3)</td>
  </tr>
  <tr>
    <td>6</td>
    <td>(7,4)</td>
  </tr>
  <tr>
    <td>7</td>
    <td>(8,4)</td>
  </tr>
</table>

</body>
</html>
