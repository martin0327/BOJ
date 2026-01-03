# [Platinum I] Shifts - 23949 

[문제 링크](https://www.acmicpc.net/problem/23949) 

### 성능 요약

메모리: 5896 KB, 시간: 540 ms

### 분류

다이나믹 프로그래밍, 부분집합의 합 다이나믹 프로그래밍

### 제출 일자

2026년 1월 3일 22:48:37

### 문제 설명

<p>Aninda and Boon-Nam are security guards at a small art museum. Their job consists of <b>N</b> shifts. During each shift, at least one of the two guards must work.</p>

<p>The two guards have different preferences for each shift. For the i-th shift, Aninda will gain <b>A<sub>i</sub></b> happiness points if he works, while Boon-Nam will gain <b>B<sub>i</sub></b> happiness points if she works.</p>

<p>The two guards will be happy if both of them receive at least <b>H</b> happiness points. How many different assignments of shifts are there where the guards will be happy?</p>

<p>Two assignments are considered different if there is a shift where Aninda works in one assignment but not in the other, or there is a shift where Boon-Nam works in one assignment but not in the other.</p>

### 입력 

 <p>The first line of the input gives the number of test cases, <b>T</b>. <b>T</b> test cases follow. Each test case begins with a line containing the two integers <b>N</b> and <b>H</b>, the number of shifts and the minimum happiness points required, respectively. The second line contains <b>N</b> integers. The i-th of these integers is <b>A<sub>i</sub></b>, the amount of happiness points Aninda gets if he works during the i-th shift. The third line contains <b>N</b> integers. The i-th of these integers is <b>B<sub>i</sub></b>, the amount of happiness points Boon-Nam gets if she works during the i-th shift.</p>

### 출력 

 <p>For each test case, output one line containing <code>Case #x: y</code>, where <code>x</code> is the test case number (starting from 1) and <code>y</code> is the number of different assignments of shifts where the guards will be happy.</p>

