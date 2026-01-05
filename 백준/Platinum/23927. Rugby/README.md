# [Platinum V] Rugby - 23927 

[문제 링크](https://www.acmicpc.net/problem/23927) 

### 성능 요약

메모리: 6208 KB, 시간: 436 ms

### 분류

수학, 삼분 탐색

### 제출 일자

2026년 1월 5일 16:29:14

### 문제 설명

<p>On a far away planet, rugby is played in the two dimensional Cartesian coordinate system without bounds. The players can occupy integer grid points only and they can move to the neighboring grid points in any of the four cardinal directions. Specifically, if a player is currently at the point (X, Y), then they can move to either of the points (X+1, Y), (X-1, Y), (X, Y+1), or (X, Y-1) in a single step.</p>

<p>After the game, <b>N</b> players are scattered throughout the coordinate system such that any grid point is empty or occupied by one or more players. They want to gather for a picture and form a perfect horizontal line of <b>N</b> grid points, one player per point, all occupied points next to each other. Formally, the players have to move so as to occupy the grid points (X, Y), (X+1, Y), (X+2, Y), ..., (X+<b>N</b>-1, Y) for some coordinates X and Y. What is the minimum total number of steps the players should make to form a perfect line if they are free to choose the position of the line in the coordinate system and the ordering of players is not important?</p>

### 입력 

 <p>The first line of the input gives the number of test cases <b>T</b>. <b>T</b> test cases follow. The first line of each test case gives the number of players <b>N</b>. The subsequent <b>N</b> lines give the initial coordinates of the players. The i-th of these lines contains two integers <b>X<sub>i</sub></b> and <b>Y<sub>i</sub></b>, which describe the initial position of i-th player (1 ≤ i ≤ <b>N</b>).</p>

### 출력 

 <p>For each test case, output one line containing <code>Case #x: y</code>, where <code>x</code> is the test case number (starting from 1) and <code>y</code> is the minimum total number of steps that the players need to make in order to form a perfect horizontal line.</p>

