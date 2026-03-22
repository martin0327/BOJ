# [Platinum III] GCD vs. XOR - 21004 

[문제 링크](https://www.acmicpc.net/problem/21004) 

### 성능 요약

메모리: 126884 KB, 시간: 13176 ms

### 분류

수학, 정수론, 조화수

### 제출 일자

2026년 3월 22일 11:09:50

### 문제 설명

<p>Optimizing is fun! Especially when it's not exactly required.</p>

<p>Everyone knows that bit operations (e.g. bitwise XOR) are faster than recursive functions (such as the greatest common divisor, GCD). To impress your internship supervisors you replaced, in the company's flagship project, all instances of $\mathop{gcd}(x,y)$ with much quicker $\mathop{xor}(x,y)$.</p>

<p>That was yesterday, on Friday. Now you start thinking whether you should have tested your new code before deploying to production... Well, better late than never. Given a sequence of numbers $a_1, \ldots, a_n$, determine how many pairs $(i, j)$ ($1 \leq i < j \leq n$) actually satisfy $\mathop{gcd}(a_i, a_j) = \mathop{xor}(a_i, a_j)$. Recall that $\mathop{gcd}(x,y)$ denotes the greatest common divisor of $x$ and $y$, while $\mathop{xor}(x,y)$ is the bitwise-XOR operation on $x$ and $y$.</p>

### 입력 

 <p>The first line of input contains the number of test cases $z$ ($1 \leq z \leq 20$). The descriptions of the test cases follow.</p>

<p>The first line of a test case contains an integer $n$ ($1 \leq n \leq 2\,000\,000$). The second line contains integers $a_1, a_2, \ldots, a_n$, all positive and not exceeding $1\,000\,000$.</p>

<p>The total length of all sequences over all test cases does not exceed $3 \cdot 10^7$.</p>

### 출력 

 <p>For each test case output a single integer: the number of pairs $(a_i, a_j)$ with $i < j$ satisfying $\mathop{gcd}(a_i, a_j) = \mathop{xor}(a_i, a_j)$.</p>

