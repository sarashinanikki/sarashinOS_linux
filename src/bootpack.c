void io_hlt(void);

void HariMain(void)
{
	int i; /* �ϐ��錾�Bi�Ƃ����ϐ��́A32�r�b�g�̐����^ */
	char *p = 0xa0000;

	for (i = 0; i <= 0xffff; i++) {
		p[i] = (i & 15); /* MOV BYTE [i],15 */
	}

	for (;;) {
		io_hlt();
	}
}
