# [Gold IV] Restroom Monitor - 21157 

[문제 링크](https://www.acmicpc.net/problem/21157) 

### 성능 요약

메모리: 4956 KB, 시간: 16 ms

### 분류

그리디 알고리즘, 정렬

### 제출 일자

2025년 7월 1일 23:00:54

### 문제 설명

<p>Irma P. Freely (yes, we've hit a new low) is in charge of the bank of restrooms at the Rest Pit truck stop.  Every so often a tour bus stops by and a load of passengers gets off to use the restroom.  Irma has a set of $n$ single-stall restrooms she can allocate to people.  Everyone takes the same amount of time to use the facilities but may have different "deadlines" for when they must be finished.  Being good at her job, Irma can look at the people in line and estimate with complete accuracy what their deadlines are.</p>

<p>Unfortunately, owing to shortages caused by the COVID pandemic, there is only one roll of toilet paper. Not everyone needs toilet paper, but only one person can be in a stall with it at a time. Irma needs to figure out whether she can schedule everyone so that they can all make use of her facilities before their deadlines. Sounds like a lot of paperwork $\ldots$ can you help her?</p>

### 입력 

 <p>Input begins with a line containing two integers $s$ and $n$, where $1 \leq s \leq 50\,000$ is the number of stalls and $1 \leq n \leq 100\,000$ is the number of people who need to use a restroom. Following this are $n$ lines, one for each person. Each line contains an integer $d$, $1 \leq d \leq 10^9$ (the deadline) and a character $t$.  If $t$ is <code>y</code>, then this person needs the toilet paper; if $t$ is <code>n</code>, they don't. Assume each user requires one unit of time and that deadlines are specified in terms of the same unit.</p>

### 출력 

 <p>If it is possible to allocate everyone to stalls to meet their deadlines, display <code>Yes</code>.  Otherwise, display <code>No</code>.</p>

