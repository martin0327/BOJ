# [Gold I] The Triangle - 5965 

[문제 링크](https://www.acmicpc.net/problem/5965) 

### 성능 요약

메모리: 6020 KB, 시간: 1932 ms

### 분류

누적 합

### 제출 일자

2025년 12월 9일 14:21:35

### 문제 설명

<p>For her spectacular milk output for the previous month, Farmer John has awarded Bessie a prize -- with a twist.  He has given her a triangular grid with N (1 <= N <= 700) rows (whose lengths vary from 1 through N, of course). Row i of the the grid has i values labeled v_ij (-1,000,000,000 <= v_ij <= 1,000,000,000) where j is in the range 1..i.</p>

<p>Bessie chooses a sub-triangle whose side length is at least K (1 <= K <= 20; 1 <= K <= N) within the triangular grid. The sub-triangle is another triangular grid which might be oriented the same as the original triangle or might be 'upside down' with its shorter rows on the bottom instead of the top.</p>

<p>After she chooses her sub-triangle, Farmer John will take the average of all the numbers in the sub-triangle, discarding the digits to the right of the decimal point, and give her that many gold coins (or take that many gold coins from her if the number is negative). Naturally, Bessie would like to maximize her prize (or minimize her loss). Help her solve this problem.</p>

<p>By way of example, Bessie is given this triangular grid with N = 3 rows and must choose a sub-triangle with a side length of at least K = 2. A graphical representation of the triangle is shown below:</p>

<pre>    / \
   / 5 \
  /-8  4\
 /2 -3  6\
 ---------</pre>

<p>She could choose any of five valid sub-triangles (one of which is the entire original triangle):</p>

<pre>                                                   /\
    / \         / \        / \         / \        /5 \       
   / 5 \       / \5\      / 5 \       / 5/\      /----\    
  /-8  4\     /-8 \4\    /-8  4\     /-8/ 4\    /\-8 4/\ 
 /2 -3  6\   / 2 -3\6\  /-------\   / 2/-3 6\  / 2\-3/6 \ 
 ---------   ---------  -2  -3  6   ---------  ----------  
  entire      lower        top          lower     upside
 triangle     left                      right      down</pre>

<p>The one that is lined below is the one with the highest average:</p>

<pre>    / \
   / 5/\
  /-8/ 4\
 / 2/-3 6\
 ---------</pre>

<p>The average of this sub-triangle is (4+6-3)/3, which is about 2.3333...; without the fraction, the answer is 2.</p>

<p>Help Bessie calculate the maximum amount of coins which she could receive.</p>

### 입력 

 <ul>
	<li>Line 1: Two space-separated integers: N and K</li>
	<li>Lines 2..N+1: Line i+1 will contain i space-separated integers: v_ij</li>
</ul>

<p> </p>

### 출력 

 <ul>
	<li>Line 1: The maximum number of coins that Bessie can receive (or, if negative, the best she can do for her loss).</li>
</ul>

<p> </p>

