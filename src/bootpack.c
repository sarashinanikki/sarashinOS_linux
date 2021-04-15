void io_hlt(void);

void HariMain(void)
{
	int i; /* 変数宣言。iという変数は、32ビットの整数型 */
	char *p = 0xa0000;

	for (i = 0; i <= 0xffff; i++) {
		p[i] = (i & 15); /* MOV BYTE [i],15 */
	}

	for (;;) {
		io_hlt();
	}
}
