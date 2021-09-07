#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#define TRUE 1
#define FALSE 0

void intro();
void room();
void frame();	//1. ����
void bed();		//2. ħ�� 
void fridge();	//3. ������ 
void safebox();	//4. ������  
void closet();	//5. ������ 
void door();	//6. ������ 
void door_password();

int isBrokenFrame = FALSE;	//���� �ļտ��� 
int isBrokenBed = FALSE;	//ħ�� �ļտ��� 

int isFindMagnifyingGlass = FALSE;	//������ ���濩�� 
int isFindGoldKey = FALSE;		//�ݻ� ���� ȹ�� ���� 
int isFindSilverKey = FALSE; 	//���� ���� ȹ�� ���� 

int isOpenSafebox = FALSE;		//�ݰ� ���� ���� 

int main() {
	int menu;
	
	while(1) {
		printf("����� ��\n\n");
		printf("1. ���� ����\n");
		printf("0. �� ����\n");
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				intro();
				room();
				break;
			case 0:
				return 0;
			default:
				printf("�Է� ����\n\n");
				break;
		}
	}
	
}

void intro() {
	system("cls");
	printf("\n\n");
	printf("������ �Ҳ�ģ�� �̶��̿� ���̰����� ���� ���̴�.\n\n");
	Sleep(1500);
	printf("���̰��� ȭ��� ���� ��񿡼�.\n");
	Sleep(2500);
	printf("���� ������ �аŷ� ������ �߰��ϰ� �ǰ�\n");
	Sleep(1500);
	printf("������ ��� ���������� ������ ������� �¾Ҵ�\n\n");
	Sleep(2500);
	printf("���� ������ ���� ��ȿ� �����ִ�..\n");
	Sleep(1500);
	printf("õ�忡�� ��������� ����Ǿ��ִ�..\n\n");
	Sleep(1500);
	printf("���� �����..? �̰����� Ż���ؾߵȴ�..\n\n");
	Sleep(1500);
	printf("������ ����߹��� �� ��ٸ��� �־�!.\n\n");
	Sleep(1500);
	system("pause");
}

void room() {
	int menu;
	
	while(1) {
		system("cls");	
		printf("[����� ��]\n\n");
		printf("�� �ȿ��� �� �� �ִ� �͵��� ã�ƺ���.\n\n");
		printf("1. å��    2.��ٶ��ħ��    3. �����\n");
		printf("4. ȭ���    5. ����    6. Ż�ⱸ\n");
			
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				if(isBrokenFrame) {
					printf("\nħ�븦 �μ����ȴ�. �� �̻� ã�� �� ����.\n");
					system("pause");
				} else {
					frame();					
				}
				break;
			case 2:
				bed();
				break;
			case 3:
				fridge();
				break;
			case 4:
				safebox();
				break;
			case 5:
				closet();
				break;
			case 6:
				door();
				break;
			default:
				printf("\n# ERROR # �Է°� ����\n");
				system("pause");
		}
	}
	
}

void frame(){//1.  å�� 
	int menu;
	
	while(1) {
		system("cls");
		printf("[����� ��]-[å��]\n\n");
		printf("��ȿ� ūå���� �ִ�.\n\n");
		printf("1. å���� ���캻��\n");
		printf("2. å���� �μ���\n");
		printf("0. ���ư���\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				if(isFindMagnifyingGlass) {
				} else {
					printf("\nå�󿡴� ���ž��°� ���� .\n\n");
				}
				break;
			case 2:
				isBrokenFrame = TRUE;
				printf("\n å��. �ı��Ѵ�..\n");
				printf("ũ��!!! ö�� å���̶��!!\n\n");
				printf("���� �������� �ؾߵɰ� ����.\n\n");
				system("pause");
				return;
			case 0:
				return;
			default:
				printf("\n�� Ʋ�Ⱦ� �ٽ� ��1\n\n");
				break;
		}
		system("pause");
	}	
}	

void bed() {//2. ħ�� 
	int menu;
	
	while(1) {
		system("cls");
		printf("[����]-[��ٶ��ħ��]\n\n");
		printf("������ ��ٶ��ħ�밡 �ִ�.\n\n");
		printf("1. ��ٶ��ħ�� ���� ���캻��\n");
		printf("2. ��ٶ��ħ�븦 ���캻��\n");
		printf("3. �̺��� ���캻��\n");
		printf("0. ���ư���\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				if(isBrokenBed)  {
					printf("\n��ٶ�� ħ��� �ı��Ǿ���..\n\n");
				} else {
					printf("\n������ �����ϴ� ��������.\n");	
				}
				system("pause");
				break;
			case 2:
				if(isBrokenBed) {
					printf("\nħ�밡 �μ����� �� �̻� ã�� �� ����.\n\n");
				} else {
					system("cls");
					printf("[����]-[ħ��]-[ħ��]\n\n");
					printf("\n���� ����� ��ٶ�� ħ��ó�� ���δ�.\n\n");
					printf("1. ħ�븦���ı����Ѵ�.\n");
					printf("2. ħ�븦��������ش�.\n");
					printf(">> ");
					scanf("%d", &menu);
					
					switch(menu) {
						case 1:
							isBrokenBed = TRUE;	//ħ�� �μ��� 
							printf("\n# ħ�밡���ı����Ǿ���. \n\n");
							printf("1. ���ظ� ������.\n");
							printf("2. ������ �д�.\n");
							printf(">> ");
							scanf("%d", &menu);
							
							switch(menu) {
								case 1: 
									printf("\n�Ķ��� �޸����� �ִ�. ��й�ȣ �ΰǰ�?\n");
									printf("�� ���ؿ� Ǯ�� ���� ������ ����..ũũ��\n");
									printf("MON = 3 \n TUE =5 \n WED =4 \n THU = ?\n\n");
									printf("EZ�ϳ�\n");
									break;
								case 2:
									printf("\nġ��� ������. �׳� ����.\n\n");
									break;
							default:
								printf("\n������ ���ߴ�. ���ư���.\n\n");
								break;
							}
							break;
						case 2:
							printf("\n��Ÿ�ð� Ư�����������������ֵ��� ����...\n\n");
							break;
						default:
							printf("\n������ ���ߴ�. ���ư���.\n\n");
							break;
					}	
				}
				system("pause");
				break;		
			case 3:
				system("cls");
				printf("[����]-[ħ��]-[�̺�]\n\n");
				printf("\n���������� Ư���� ���� ������ �ʴ´�.\n\n");
				printf("1. �̺� ���̸� ������\n");
				printf("2. �̺��� ���������\n");
				printf(">> ");
				scanf("%d", &menu);
				
				switch(menu) {
					case 1:
						if(isFindGoldKey) {
							printf("\n���踻�� �ٸ����� ������ �ʴ´� .\n\n");
						} else {
							isFindGoldKey = TRUE;	//�ݻ� ���� ȹ�� 
							printf("\n�̺� �ӿ��� �����ϳ��� �߰��ߴ�. ��� ���°���?\n\n");
						}
						break;
					case 2:
						printf("\n���� ������ �ϴϱ� �������..\n\n");
						break;
					default:
						printf("\n�Ƹ���. ���ư���.\n\n");
						break;
						
				}
				system("pause");
				break;
			case 0:
				return;
			default:
				printf("# ERROR # ���ƴϾ�\n\n");
				system("pause");
		}
	}
}		

void fridge(){//3. �����
	int menu;
	
	while(1) {
		system("cls");
		printf("[����ǹ�]-[����� ]\n\n");
		printf("LG �Ż� ����� �����ҿ� �ִ� �����ִ��� ���.\n");
		printf("���� ������ ����.\n\n");
		printf("1. LPG �� ���캻��\n");
		printf("2. �ع�����  ���캻��\n");
		printf("3. ����� ���캻��\n");
		printf("4. ��Ʈ���ƾմٸ��� ���캻��\n");
		printf("5. �߹��� ���캻��\n");
		printf("0. ���ư���\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				printf("\n\n");
				printf("\n �̰� �� ���� �ִ°��� ������ ���ΰ�?\n\n");
				break;
			case 2:
				printf("\n ���񸰳��� ���ϰԳ��� ���Ѱǰ�?..\n\n");
				break;
			case 3:
				printf("\n������ ���ٴѴ� ��ǥ������ PALDOCOMPANY ��� ���ִ�..\n\n");
				break;
			case 4:
				printf("\n��2���� �Ϸ��� ���� ������ ���δ�..\n\n");
				break;
			case 5:
				printf("\n ��ǥ�� ����߹��̰� ���޴߹��̿���.\n�� ������ ����� �Ծ�߰ھ�!\n\n");
				break;
			case 0:
				return;
			default:
				printf("\n qudtls ����\n\n");
				break;
		}
		system("pause");
	}
}	

void safebox(){//4.��� 
	int menu;
	
	while(1) {
		system("cls");
		printf("[����� ��]-[ȭ���]\n");
		printf("���񸰳��� ���� ȭ����̴�.\n\n");
		printf("1. ȭ��� ���� ����\n");
		printf("2. ȭ��� ���� �μ���\n");
		printf("3. ȭ��� ���� ���캻��\n");
		printf("0. ���ư���\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				if(isOpenSafebox) {
					printf("\n�� �̹� ������ ���� ��Ծ����� �ٽ��ϼ� ����.\n\n");
					break; 
				}
				if(isFindGoldKey && isFindSilverKey) {
					isFindMagnifyingGlass = TRUE;	//ȭ��� ����
					isOpenSafebox = TRUE;	//ȭ��� ������ 
					printf("\nȭ��� ����뿡 �޸����� �ִ�\n");	
					printf("�޸������� ū �۾��� ���� �����ִ�.\n\n");
					printf("'�����׹����� ���̴�?.\n����������\n");
					printf("���� Ǯ�� ��� ������ ����¡'\n\n");
					printf("�����R�����R �������m\n\n");					
				} else {
					printf("\nȭ��ǿ� ���谡 �� 2���� �ʿ��ϳİ�!!.\n\n");
				}
				break;
			case 2:
				printf("\n���ı����ؾ߰ڱ�\n\n");
				printf("\n ũ��!!! ���� ���� ���δ� ö�� �������\n\n");
				break;
			case 3:
				printf("\n�ƴ� ���� ȭ��ǿ� ���豸���� �ΰ���?\n\n");
				break; 
			case 0:
				return;
			default:
				printf("\n�ȹٷ��� ��� �հ��� ��������? \n\n");
				break;
		}
		system("pause");
	}	
}	

void closet(){//5. ����
	int menu;
	
	while(1) {
		system("cls");
		printf("[����� ��]-[����]\n\n");
		printf("�� ������ ���� ä�� ������ ū �����̴�.\n\n");
		printf("1. ������ ���� ���캻��\n");
		printf("2. ������ ���� ���캻��\n");
		printf("3. ������ ���� ���캻��\n");
		printf("4. ������ ���� ���캻��\n");
		printf("5. ������ �μ���\n");
		printf("0. ���ư���\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				if(isFindSilverKey) {
					printf("\n ������ �ʿ��� ���̻� ã���� ����δ� ������³�.\n\n");
				} else {
					isFindSilverKey = TRUE;		//���� ���� ã�� 
					printf("\n������ �� �ָӴϿ� ��������� LPG������ �ִ�.\n\n");
				}
				break;
			case 2:
				printf("\n������ �ʻ��̿� �޸����� ����ִ�\n\n");
				printf("\n 9 + 3 = 12 \n 5 + 10 = 3 \n 7 + 9= 4 \n 15 + 6 = ???\n\n");
				printf("�����뤻");
				break;
			case 3:
				printf("\n������ �ʿ��� ����߹� ������ ����ִ�.\n\n");
				break; 
			case 4:
				printf("\n������ �ʿ��� ���� ����� �ȵ�û�� ������ ����ִ�.\n\n");
				break; 
			case 5:
				printf("\n������ �����塻�̶�...\n�ν� ��������..\nũ��!!!!!!!!!!!\nö�������ΰ� ��Ծ� ���ȴ�..����?\n\n");
				break; 
			case 0:
				return;
			default:
				printf("\n�߷��߷�..�ճ����ϳ�..\n\n");
				break;
		}
		system("pause");
	}	
}	

void door(){//6. ���Թ� 
	int menu;
	
	while(1) {
		system("cls");
		printf("[����ǹ�]-[Ż�ⱸ]\n\n");
		printf("���� ���� �����־���.\n");
		printf("�� �տ��� ȭ��Ʈ���忡 �۱Ͱ� ���ִ�.\n\n");
		
		printf("1. ȭ��Ʈ���带 ���캻��\n");
		printf("2. ��й�ȣ�� �Է��Ѵ�\n");
		printf("0. ���ư���\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				printf("\nȭ��Ʈ���忡�� �����ϰ� ���ٽ��ִ�?\n\n");
				printf("�濡�ִ� ��Ʈ ��Ҹ� ��� ��й�ȣ�� �Է��� Ż���϶�.\n\n");
				printf("�׷��� �� ���� ������ ó �����Ȥ���\n");
				break;
			case 2:
				door_password();
				break;
			case 0:
				return;
			default:
				printf("\n�� �ƴϾ� �ٽ��� ����\n\n");
				break;
		}
		system("pause");
	}	
}	

void door_password() {
	char pass[5] = "6169", temp[5];
	
	system("cls");
	printf("\n\n      [ PASSWORD ]\n\n");
	printf(">> ");
	scanf("%s", &temp);
	
	if(!strcmp(pass, temp)) {
		system("cls");
		printf("\n\n�Ƥ��� ���� ���Գ� ����.\n\n");
		printf("�� �� ������ ������.\n");
		printf("�� �׳����� ���� ����� ����\n");
		printf("�Ƹ��� ������ ����̳� �Ծ����.\n\n");
		printf("�� ���� ���ΰ��� �쿩���� ���� ���� ���ư� ���� ����� ���� �г��Ͽ���..\n\n");
		printf("�� ����..");
		printf("#1.SAD ENDING");
		system("pause");
		exit(0);
	} else {
		printf("\n\n��й�ȣ ������ ���� �Ƥ��� �ʸ� �� ����\n\n");
		return;	
	}
}

