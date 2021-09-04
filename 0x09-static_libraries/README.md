<h1 class="gap">0x09. C - Static libraries</h1><div class="gap" id="project-description">
<h2>Resources</h2>
<p><strong>Read or watch</strong>:</p>
<ul>
<li><a href="/rltoken/4Dki8HiSS6QBDwsznMbXFA" target="_blank" title='What Is A "C" Library? What Is It Good For?'>What Is A “C” Library? What Is It Good For?</a> </li>
<li><a href="/rltoken/4Dki8HiSS6QBDwsznMbXFA" target="_blank" title='Creating A Static "C" Library Using "ar" and "ranlib"'>Creating A Static “C” Library Using “ar” and “ranlib”</a> </li>
<li><a href="/rltoken/4Dki8HiSS6QBDwsznMbXFA" target="_blank" title='Using A "C" Library In A Program'>Using A “C” Library In A Program</a> </li>
<li><a href="/rltoken/wC9HCOvJwa_Co1nZuL4QMA" target="_blank" title="What is difference between Dynamic and Static library(Static and Dynamic linking)">What is difference between Dynamic and Static library(Static and Dynamic linking)</a> (<em>stop at 4:44</em>)</li>
</ul>
<p><strong>man or help</strong>:</p>
<ul>
<li><code>ar</code></li>
<li><code>ranlib</code></li>
<li><code>nm</code></li>
</ul>
<h2>Learning Objectives</h2>
<p>At the end of this project, you are expected to be able to <a href="/rltoken/9pxXHdbXznA4SYhiXG08MA" target="_blank" title="explain to anyone">explain to anyone</a>, <strong>without the help of Google</strong>:</p>
<h3>General</h3>
<ul>
<li>What is a static library, how does it work, how to create one, and how to use it</li>
<li>Basic usage of <code>ar</code>, <code>ranlib</code>, <code>nm</code></li>
</ul>
<h2>Requirements</h2>
<h3>C</h3>
<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your files will be compiled on Ubuntu 20.04 LTS using <code>gcc</code>, using the options <code>-Wall -Werror -Wextra -pedantic -std=gnu89</code></li>
<li>All your files should end with a new line</li>
<li>A <code>README.md</code> file, at the root of the folder of the project is mandatory</li>
<li>Your code should use the <code>Betty</code> style. It will be checked using <a href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl" target="_blank" title="betty-style.pl">betty-style.pl</a> and <a href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl" target="_blank" title="betty-doc.pl">betty-doc.pl</a></li>
<li>You are not allowed to use global variables</li>
<li>No more than 5 functions per file</li>
<li>You are not allowed to use the standard library. Any use of functions like <code>printf</code>, <code>puts</code>, etc… is forbidden</li>
<li>You are allowed to use <a href="https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c" target="_blank" title="_putchar">_putchar</a></li>
<li>You don’t have to push <code>_putchar.c</code>, we will use our file. If you do it won’t be taken into account</li>
<li>In the following examples, the <code>main.c</code> files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own <code>main.c</code> files at compilation. Our <code>main.c</code> files might be different from the one shown in the examples</li>
<li>The prototypes of all your functions and the prototype of the function <code>_putchar</code> should be included in your header file called <code>main.h</code></li>
<li>Don’t forget to push your header file</li>
</ul>
<h3>Bash</h3>
<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your scripts will be tested on Ubuntu 20.04 LTS</li>
<li>All your files should end with a new line (<a href="http://unix.stackexchange.com/questions/18743/whats-the-point-in-adding-a-new-line-to-the-end-of-a-file/18789">why?</a>)</li>
<li>The first line of all your files should be exactly <code>#!/bin/bash</code></li>
<li>A <code>README.md</code> file, at the root of the folder of the project, describing what each script is doing</li>
<li>All your files must be executable</li>
</ul>
<h2>More Info</h2>
<p>You do not need to learn about dynamic libraries, yet.</p>
<h3>Manual QA Review</h3>
<p><strong>It is your responsibility to request a review for your blog from a peer before the project’s deadline. If no peers have been reviewed, you should request a review from a TA or staff member.</strong></p>
</div>