#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int Add(int x, int y) {
	return x + y;
}

int main() {
	
	//debug�汾�ǲ����κι滮��
	//release�汾�Ǿ������������ٶȺͳ����С���Ż�

	//������F5(��������) һ��� F9(�ϵ�)һͬʹ��
	//F11Ϊ�����, ÿ�䶼��ִ��, ����뺯�����ڲ�
	//F10Ϊ�����, ��������������ڲ�ȥ
	//����debug��windows�еĸ��ִ���,�ﵽ���ӳ������е�Ŀ��, �������ֱ���ֵ�ı仯���ڴ�����.
	//���д�����һ�����Ͽ����ڴ��ڵײ���bar�л�, ������ջ, auto localһ���
	//ͬ�����������Diassembly
	//���ö�ջͬ������

	int ret = Add(2, 3);

	for (int i = 0; i < 10; i++) {
		printf("%d ", i);
	}


	return 0;
}