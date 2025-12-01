# [Platinum III] Garbled Email (Large) - 12328 

[문제 링크](https://www.acmicpc.net/problem/12328) 

### 성능 요약

메모리: 248680 KB, 시간: 7352 ms

### 분류

다이나믹 프로그래밍, 해싱, 문자열

### 제출 일자

2025년 12월 1일 14:18:27

### 문제 설명

<p>Gagan just got an email from her friend Jorge. The email contains important information, but unfortunately it was corrupted when it was sent: all of the spaces are missing, and after the removal of the spaces, some of the letters have been changed to other letters! All Gagan has now is a string <b>S</b> of lower-case characters.</p>

<p>You know that the email was originally made out of words from the dictionary described below. You also know the letters were changed after the spaces were removed, and that the difference between the indices of any two letter changes is not less than 5. So for example, the string "code jam" could have become "codejam", "dodejbm", "zodejan" or "cidejab", but not "kodezam" (because the distance between the indices of the "k" change and the "z" change is only 4).</p>

<p>What is the minimum number of letters that could have been changed?</p>

<p>The dictionary contains <b>W</b> words of at least 1 and at most 10 lower-case characters and is given at the start of the input file. It is not a dictionary from any natural language, though it does contain some English words. The dictionary is the same for all test cases in a single input file. The dictionary is given in lexicographically increasing order and does not contain duplicate words.</p>

### 입력 

 <p>The first line of the input gives the number of words in the dictionary, <b>W</b>. Each of the next <b>W</b> lines contains a string of lower-case characters a-z representing a word in the dictionary. The next line of the input gives the number of test cases, <b>T</b>. <b>T</b> test cases follow. Each test case consists of a single line containing a string <b>S</b>, consisting of lower-case characters a-z.</p>

### 출력 

 <p>For each test case, output one line containing "Case #x: y", where x is the case number (starting from 1) and y is the minimum number of letters that could have been changed in order to make <b>S</b>.</p>

