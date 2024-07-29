# [Gold I] Deforestation - 26189 

[문제 링크](https://www.acmicpc.net/problem/26189) 

### 성능 요약

메모리: 27004 KB, 시간: 40 ms

### 분류

자료 구조, 다이나믹 프로그래밍, 트리에서의 다이나믹 프로그래밍, 그리디 알고리즘, 우선순위 큐, 정렬, 트리

### 제출 일자

2024년 7월 29일 17:26:26

### 문제 설명

<p>You want to remove a big tree from your property, but it's too big for you to carry all at once. How many pieces do you have to cut it into if the maximum weight you can carry is <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D44A TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>W</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$W$</span></mjx-container>?</p>
<p>The tree has a single trunk connected to the ground and can split out into multiple branches. All of those branches can branch out further etc. So each segment of the tree is a continuous mass of wood, which may or may not split out into multiple branches.</p>
<p>You can make cuts at any point on the tree; start, end, or anywhere in the middle of any segment. You can consider branching as an arbitrarily small part of the tree, i.e. you can cut immediately before or after a branch splits off without increasing the weight of the base branch, but it will affect whether the child branches are cut off as a single piece or just one branch is cut off separately. </p>

### 입력 

 <p>The first line of the input will contain <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D44A TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>W</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$W$</span></mjx-container>, your carrying capacity.
The next line will continue with the description of the first tree segment; its trunk.</p>
<p>A tree segment description is defined recursively. The first line contains two numbers <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D440 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>M</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$M$</span></mjx-container>, weight of the segment, and <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container>, number of branches coming out of the segment at its end. This is followed by <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container> tree segment descriptions, describing each one of the branches.</p>

### 출력 

 <p>Output one number, the number of pieces you have to cut the tree into.</p>

