	printf   main
	  global   extern
main:
	  mov   edi, format
	  xor   eax, eax
	  call  printf
	  mov   eax, 00
	  ret
format: db `Hello, Holberton\n`,00


