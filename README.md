# Pozza
Pozza is a new esoteric, stupid and drip programming language created for joke. 
The file extension I chose is .pz

You can find some exercises [here.](https://github.com/komodoooo/pozza-esolang/tree/main/examples)

# Documentation
### Comments

Pozza ignore any non-instruction, but if you want to use a _correct_ comment you can type your comment inside two '|'.

Example:
```
|this is a comment!|
```

Oh, comments will not work with correct instructions by the way. (lol)
### Strings
In pozza, you can print a string with '\\' and '/', for example:

`\string/` _returns => `string`_

Breaklines are represented with '&' and they must be inside the string.

You can't manipulate a string in any way.
### Loops
You can initialize a loop with '@' and define the n-times of repeats after it **with the lenght of a string**, closing with a '^'. 

For closing a loop, just put @ after the set of istructions you want to repeat. 

Here an example of a loop that prints for 5 times 'Hi!\n':

```
@sesso^
\Hi!&/
@
```

The lenght of the word "sesso" is 5, so it will repeat 5 times what's inside the loop. Simple, isn't it?

For infinite loops, you can use '=' without closing with '^', for example:

```
@=
\owo/
@
```

### Memory allocation
You can allocate memory bytes of memory inside two '.', for example, a program that allocates 1024 bytes of memory:

```
.1024.
```

### Counters

You can initialize only one counter inside '#' + number of counts + '!', if you want to output it you can use '?'.

For increase and decrease the counter, you can use rispectively '*' and '_'.

Example of an increasing counter:
```
#10!
*
?
```
It will print 11.

Example of an decreasing counter:
```
#10!
_
?
```
It will print 9.

