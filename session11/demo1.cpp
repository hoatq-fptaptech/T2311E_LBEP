#include <stdio.h>
typedef struct Classroom{
	char name[20];
	char room[10];
}Classroom;
typedef struct Student{
	char name[50];
	int writeMark;
	int pracMark;
	int asmMark;
	Classroom myClass;
}Student;
int main(){
	int x;
	struct Student sv;

	printf(""NHap ten sinh vien:"\n" );
	scanf("%s",sv.name);
	printf("NHap diem ly thuyet:");
	scanf("%d",&sv.writeMark);
	printf("NHap diem thuc hanh:");
	scanf("%d",&sv.pracMark);
	printf("NHap diem qua trinh:");
	scanf("%d",&sv.asmMark);
	printf("NHap ten lop hoc cua sv:");
	scanf("%s",sv.myClass.name);

	Student sv2;

	Student t2311e[20];
	for(int i=0;i<20;i++){
		printf(""NHap ten sinh vien:"\n" );
		scanf("%s",t2311e[i].name);
		printf("NHap diem ly thuyet:");
		scanf("%d",&t2311e[i].writeMark);
		printf("NHap diem thuc hanh:");
		scanf("%d",&t2311e[i].pracMark);
		printf("NHap diem qua trinh:");
		scanf("%d",&t2311e[i].asmMark);
	}
	
}