# Problem with cursor position after WriteConsole

Writing to console output the sequence `\b \b` no more proceses expected result, the cursor is moved left twice.

### Stable 17134 - ok

![win10-17134](https://github.com/Maximus5/ms-bug-9/blob/master/win10-17134.png?raw=true)

### Insider 17686 - broken

![win10-17686](https://github.com/Maximus5/ms-bug-9/blob/master/win10-17686.png?raw=true)
