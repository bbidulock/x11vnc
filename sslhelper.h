#ifndef _X11VNC_SSLHELPER_H
#define _X11VNC_SSLHELPER_H

/* -- sslhelper.h -- */


#define OPENSSL_INETD 1
#define OPENSSL_VNC   2
#define OPENSSL_HTTPS 3

extern int openssl_sock;
extern int openssl_port_num;
extern int https_sock;
extern pid_t openssl_last_helper_pid;

extern int openssl_present(void);
extern void openssl_init(void);
extern void openssl_port(void);
extern void https_port(void);
extern void check_openssl(void);
extern void check_https(void);
extern void ssl_helper_pid(pid_t pid, int sock);
extern void accept_openssl(int mode);


#endif /* _X11VNC_SSLHELPER_H */
