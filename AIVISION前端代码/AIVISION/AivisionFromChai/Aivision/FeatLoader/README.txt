��֤������������ֵ��������һ���ļ�(modelfile)�У����߱��浽���ݿ���

input:  image file path 
output: feature data file 



/*
demo is here 

int main(int, char* [])
{
char c;
int i = 0;
VideoCapture inputVideo(0);    //0Ϊ�ⲿ����ͷ��ID��1Ϊ�ʼǱ���������ͷ��ID
Mat src;
Seetaface sf = Seetaface(
"model/seeta_fd_frontal_v1.0.bin",
"model/seeta_fa_v1.0.bin",
"model/seeta_fr_v1.0.bin"
);
src = cv::imread("res/2.png");
//while (true)
//{
//	inputVideo >> src;

std::vector<seeta::FaceInfo> faces = sf.detect(src);
int32_t num_face = static_cast<int32_t>(faces.size());
cv::Rect face_rect;
for (int32_t i = 0; i < num_face; i++) {
face_rect.x = faces[i].bbox.x;
face_rect.y = faces[i].bbox.y;
face_rect.width = faces[i].bbox.width;
face_rect.height = faces[i].bbox.height;
//
cv::rectangle(src, face_rect, CV_RGB(0, 0, 255), 3, 8, 0);
}
imshow("", src);
//}
cv::waitKey(0);
cv::destroyAllWindows();
return 0;
}
*/