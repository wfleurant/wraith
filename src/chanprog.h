#ifndef _CHANPROG_H
#define _CHANPROG_H

#define DO_LOCAL	1
#define DO_NET		2

#ifndef MAKING_MODS
extern struct chanset_t *chanset;
extern char botname[];

int do_chanset(char *, struct chanset_t *, char *, int);
void checkchans(int);
void tell_verbose_uptime(int);
void tell_verbose_status(int);
void tell_settings(int);
int isowner(char *);
void reaffirm_owners();
void rehash();
void reload();
void chanprog();
void check_timers();
void check_utimers();
void rmspace(char *s);
void set_chanlist(const char *host, struct userrec *rec);
void clear_chanlist(void);
void clear_chanlist_member(const char *nick);
int shouldjoin(struct chanset_t *);
#endif /* !MAKING_MODS */

#endif /* !_CHANPROG_H */
