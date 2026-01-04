# [Platinum II] Diverse Subarray - 23934 

[문제 링크](https://www.acmicpc.net/problem/23934) 

### 성능 요약

메모리: 11872 KB, 시간: 2556 ms

### 분류

자료 구조, 느리게 갱신되는 세그먼트 트리, 세그먼트 트리, 슬라이딩 윈도우

### 제출 일자

2026년 1월 4일 10:58:13

### 문제 설명

<p>Vanity has <b>N</b> trinkets on her shelf, numbered 1, 2, ..., <b>N</b> from left to right. Trinkets come in different types, which are denoted by positive integers. The i-th trinket on her shelf is of type <b>A<sub>i</sub></b>.</p>

<p>She is going to see her family overseas today and would like to bring as many trinkets as she can. However, since she is in a hurry, Vanity must take a consecutive interval of trinkets. Formally, Vanity selects two indices, <i>l</i> and <i>r</i>, and takes all of the trinkets numbered <i>l</i>, <i>l</i>+1, ..., <i>r</i>-1, <i>r</i>. Also, due to tax rules, airport security will throw away <i>all</i> trinkets of a type if Vanity has more than <b>S</b> of that type in the chosen interval.</p>

<p>For example, suppose that <b>S</b> = 2, and Vanity brings six trinkets: one of type 0, two of type 1, and three of type 2. She will be allowed to keep the trinket of type 0 and both trinkets of type 1, but she will lose <i>all</i> of the trinkets of type 2!</p>

<p>Vanity needs to choose <i>l</i> and <i>r</i> such that she can take the maximum number of trinkets for her family. What is the maximum number of trinkets she can bring?</p>

### 입력 

 <p>The first line of the input gives the number of test cases, <b>T</b>. <b>T</b> test cases follow. The first line of each test case contains the two integers <b>N</b> and <b>S</b>, the number of trinkets, and the maximum number of trinkets allowed of a single type, respectively. The second line contains <b>N</b> integers. The i-th integer gives <b>A<sub>i</sub></b>, the type of the i-th trinket.</p>

### 출력 

 <p>For each test case, output one line containing <code>Case #x: y</code>, where <code>x</code> is the test case number (starting from 1) and <code>y</code> is the maximum number of trinkets that Vanity can bring to her family.</p>

