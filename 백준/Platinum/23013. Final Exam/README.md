# [Platinum V] Final Exam - 23013 

[문제 링크](https://www.acmicpc.net/problem/23013) 

### 성능 요약

메모리: 18048 KB, 시간: 4020 ms

### 분류

이분 탐색, 자료 구조, 구현

### 제출 일자

2025년 4월 8일 21:44:44

### 문제 설명

<p>It's time for the final exam in algorithms and data structures!</p>

<p>Edsger prepared N sets of problems. Each set consists of problems in an increasing difficulty sequence; the i-th set can be described by two integers A<sub>i</sub> and B<sub>i</sub> (A<sub>i</sub> ≤ B<sub>i</sub>), which denotes that this set contains problems with difficulties A<sub>i</sub>, A<sub>i+1</sub>, …, B<sub>i</sub>. Among all problems from all sets, it is guaranteed that no two problems have the same difficulty.</p>

<p>This semester Edsger has to test M students. He wants to test each student with exactly one problem from one of his sets. No two students can get the exact same problem, so when Edsger tests a student with some problem, he cannot use this problem anymore. Through countless lectures, exercises, and projects, Edsger has gauged student number j to have skill level S<sub>j</sub>, and wants to give that student a problem with difficulty S<sub>j</sub>. Unfortunately, this is not always possible, as Edsger may have not prepared a problem of this difficulty, or he may have already asked this problem to some other student earlier. Therefore, Edsger will choose for the j-th student a problem of difficulty P<sub>j</sub>, in a way that |P<sub>j</sub>−S<sub>j</sub>| is minimal and a question of difficulty P<sub>j</sub> was not already given to any of the students before the j-th student. In case of ties, Edsger will always choose the easier problem. Note that the problem chosen for the j-th student may affect problems chosen for all the students tested later, so you have to process students in the same order as they appear in the input.</p>

<p>As keeping track of all the problems can be fairly complicated, can you help Edsger and determine which problems he should give to all of his students?</p>

### 입력 

 <p>The first line of the input gives the number of test cases, T. T test cases follow.</p>

<p>Each test case begins with a line which contains two integers N and M: the number of problem sets, and the number of students, respectively. N lines follow, describing the problem sets. Each of these N lines consists of two integers A<sub>i</sub> and B<sub>i</sub> denoting the easiest and the hardest problem in the i-th problem set. Finally, the test case ends with a single line with M integers S<sub>1</sub>, S<sub>2</sub>, …, S<sub>M</sub> denoting students' skill levels in the order they will be tested.</p>

### 출력 

 <p>For each test case, output one line containing <code>Case #x: P<sub>1</sub>P<sub>2</sub>…P<sub>M</sub></code>, where x is the test case number (starting from 1) and P<sub>j</sub> is a difficulty of a problem that will be given to the j-th student.</p>

