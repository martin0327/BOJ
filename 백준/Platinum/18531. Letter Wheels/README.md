# [Platinum V] Letter Wheels - 18531 

[문제 링크](https://www.acmicpc.net/problem/18531) 

### 성능 요약

메모리: 2512 KB, 시간: 2576 ms

### 분류

문자열, 브루트포스 알고리즘, KMP

### 제출 일자

2026년 2월 21일 04:53:14

### 문제 설명

<p><img alt="" src="https://upload.acmicpc.net/ad6b8b22-e0eb-4c69-a156-ac833da34a76/-/preview/" style="width: 70px; height: 75px; float: right;">There are three horizontal wheels of letters stacked one on top of the other, all with the same number of columns. All wheels have one letter, either ‘A’, ‘B’ or ‘C’, in each of its columns on the edge of the wheel. You may rotate the wheels to adjust the positions of the letters. In a single rotation, you can rotate any single wheel to the right or to the left by one column. The wheels are round, of course, so the first column and last column are adjacent.</p>

<p>You would like to determine whether it is possible to rotate the wheels so that every column has three distinct letters across the three wheels, and if so, determine the minimum number of rotations required.</p>

### 입력 

 <p>The input has exactly three lines. Each line has a string s (2 ≤ |s| ≤ 5 · 10<sup>3</sup>) consisting only of upper-case letters ‘A’, ‘B’ or ‘C’, describing the letters of one wheel in their initial positions. All three strings will be of the same length.</p>

### 출력 

 <p>Output a single integer, which is the minimum number of rotations required, or −1 if it isn’t possible.</p>

