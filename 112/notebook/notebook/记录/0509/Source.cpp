#include <opencv2\core\core.hpp>
#include<opencv2\imgproc\imgproc.hpp>
#include<opencv2\highgui\highgui.hpp>
#include<iostream>
using namespace cv;

/////////////////////////////////////////////
////////////////////////////////////////////
///////////////////////////////////////////����ph2ͼ��
//int main(){
//	//�����ƵĻ���ͼ��Ph_1
//	Mat ph_1 = imread("C://Users//jo//Desktop//123//Patterns//test//xor04//original//15.jpg");
//
//	//�õ�ͼ����ļ�λ��
//	string windowsName;
//	string fileName_to_read = "C://Users//jo//Desktop//123//Patterns//test//xor04//original//";
//	string fileName_to_write = "C://Users//jo//Desktop//123//Patterns//test//xor04//";
//	string jpgName = ".jpg";
//	string sumName_to_read,sumName_to_write;
//	char a[10];
//	
//
//	for (int i = 1; i <= 36; i++){
//		//�ӵ�19����ʼ�����ú����ƵĻ���ͼ��
//		if (i==19)
//			ph_1 = imread("C://Users//jo//Desktop//123//Patterns//test//xor04//original//33.jpg");
//
//		_itoa_s(i, a, 10);
//		windowsName = a;
//		sumName_to_read = fileName_to_read + windowsName + jpgName;
//		sumName_to_write = fileName_to_write + windowsName + jpgName;
//		Mat pl = imread(sumName_to_read);
//		//std::cout << ph_1.type() << std::endl << CV_8UC3 << std::endl;;
//		Mat ph_2 = Mat(768, 1024, CV_8UC3);
//		int row_num = 768;
//		int col_num = 1024;
//		unsigned char val_ph1, val_pl, val_ph2;
//		for (int j = 0; j < row_num; j++){
//			unsigned char * data_ph_1 = ph_1.ptr<unsigned char>(j);
//			unsigned char *data_ph_2 = ph_2.ptr<unsigned char>(j);
//			unsigned char *data_pl = pl.ptr<unsigned char>(j);
//			for (int k = 0; k < col_num * 3; k++){
//				val_ph1 = data_ph_1[k];
//				val_pl = data_pl[k];
//				//ת������ֵΪ0��1ֵ��Ϊ�˽��а�λ���^
//				if (val_ph1 == 255)
//					val_ph1 = 1;
//				if (val_pl == 255)
//					val_pl = 1;
//				//���õ���һ����Ƶͼ��
//				val_ph2 = val_ph1 ^ val_pl;
//				//ת������ֵ0��1Ϊ0��255��
//				if (val_ph2 == 1)
//					data_ph_2[k] = 255;
//				else
//					data_ph_2[k] = 0;
//			}
//		}
//
//
//		imwrite(sumName_to_write, ph_2);
//
//
//	}
//	
//
//
//
//
//	
//	//namedWindow("hello");
//	
//    //imshow("hello", ph_2);
//	//waitKey(0);
//	
//
//
//
//	//getchar();
//	return 0;
//}
///////////////////////////////////////////////////
//////////////////////////////////////////////////
/////////////////////////////////////////////////�����ܷ�ָ���ԭ����ͼ��
//int main(){
//
//
//	//�����ƵĻ���ͼ��Ph_1
//	Mat ph_1 = imread("C://Users//jo//Desktop//123//Patterns//test//xor04//2.jpg");
//	Mat ph_2 = imread("C://Users//jo//Desktop//123//Patterns//test//xor04//15.jpg");
//
//
//
//
//	    Mat pl = Mat(768, 1024, CV_8UC3);
//		int row_num = 768;
//		int col_num = 1024;
//		unsigned char val_ph1, val_pl, val_ph2;
//		for (int j = 0; j < row_num; j++){
//			unsigned char * data_ph_1 = ph_1.ptr<unsigned char>(j);
//			unsigned char *data_ph_2 = ph_2.ptr<unsigned char>(j);
//			unsigned char *data_pl = pl.ptr<unsigned char>(j);
//			for (int k = 0; k < col_num * 3; k++){
//				val_ph1 = data_ph_1[k];
//				val_ph2 = data_ph_2[k];
//				val_pl = data_pl[k];
//				//ת������ֵΪ0��1ֵ��Ϊ�˽��а�λ���^
//				if (val_ph1 == 255)
//					val_ph1 = 1;
//				if (val_ph2 == 255)
//					val_ph2 = 1;
//				//���õ���һ����Ƶͼ��
//				val_pl = val_ph1 ^ val_ph2;
//				//ת������ֵ0��1Ϊ0��255��
//				if (val_pl == 1)
//					data_pl[k] = 255;
//				else
//					data_pl[k] = 0;
//				//std::cout << (int)data_pl[k] << " ";
//			}
//
//
//		}
//		imwrite("C://Users//jo//Desktop//123//Patterns//test//xor04//pl.jpg", pl);
//
//
//	
//
//
//
//
//
//
//	namedWindow("hello");
//
//	imshow("hello", pl);
//	waitKey(0);
//
//
//
//
//	//getchar();
//
//
//
//	return 0;
//}
////////////////////////////////////////
///////////////////////////////////////
//////////////////////////////////////ʹ��ģ��ȥ�����������Ķ�����ͼ��
//int main(){
//
//
//	//�����ƵĻ���ͼ��Ph_1
//	//Mat ph_1 = imread("C://Users//jo//Desktop//123//Patterns//test//xor04//2.jpg");
//	//Mat ph_2 = imread("C://Users//jo//Desktop//123//Patterns//test//xor04//15.jpg");
//	int length, sum, num;
//	std::cout << "����ͳ��ģ��ĳ��ȣ�Ҫ����������" << std::endl;
//	while (std::cin >> length)
//	{
//		std::cout << "input value :" << length << std::endl;
//		if (length % 2 == 0)
//		{
//			std::cout << "�������룺" << std::endl;
//			continue;
//		}
//		Mat image = imread("C://Users//jo//Desktop//112//0.png", 0);
//		Mat image_clone = image.clone();
//
//		unsigned char val_pl;
//		for (int j = 0; j < image.rows; j++){
//				//unsigned char * data_ph_1 = ph_1.ptr<unsigned char>(j);
//				//unsigned char *data_ph_2 = ph_2.ptr<unsigned char>(j);
//				unsigned char *data_pl = image.ptr<unsigned char>(j);
//				for (int k = 0; k < image.cols; k++){
//				
//					val_pl = data_pl[k];
//					//ת������ֵΪ0��1ֵ��Ϊ�˽��а�λ���^
//					if (val_pl == 255)
//						data_pl[k] = 1;
//					
//				}
//
//
//			}
//		//imwrite("C://Users//jo//Desktop//112//restore_binary//test.png", image);
//		unsigned char *data,*data_clone;
//		for (int i = 0; i < image.cols; i++){
//			for (int j = 0; j < image.rows; j++)
//			{
//				data = image.data + j*image.step + i*image.elemSize();
//				data_clone = image_clone.data + j*image_clone.step + i*image_clone.elemSize();
//				//if (j < (length-1)||*data==128)
//				//	continue;
//				if (j < (length/2) || *data == 128)
//					continue;
//				if (j == (image.rows - length/2))
//					break;
//				unsigned char * pos;
//				num = 0;
//				sum = 0;
//				for (int k = -length/2; k <= length/2; k++)
//				{
//					pos = data - k*image.step;
//					if (*pos==128)
//						continue;
//					else
//					{
//						sum += *pos;
//						num++;
//
//					}
//
//				}
//				if (sum > (num - sum))
//					*data_clone = 255;
//				if (sum < (num - sum))
//					*data_clone = 0;
//
//
//				//sum = *data + *(data+image.step)
//
//			}
//
//		}
//		imwrite("C://Users//jo//Desktop//112//test.png", image_clone);
//
//	}
//	
//	getchar();
//
//
//
//	return 0;
//}

#include<fstream>
#include<vector>
using namespace std;
void make_pattern_on_original(string pro_mask_fileName)
{

	Mat mask = imread(pro_mask_fileName);
	//�õ�ͼ����ļ�λ��
	string windowsName_to_read,windowsName_to_write;
	string fileName_to_read = "C://Users//jo//Desktop//123//Patterns//test//xor04//original//";
	string fileName_to_write = "C://Users//jo//Desktop//123//Patterns//test//test//";
	string jpgName = ".jpg";
	string sumName_to_read, sumName_to_write;
	char a[10];
	char b[10];

	for (int i = 1; i <= 36; i++){
		//�ӵ�19����ʼ�����ú����ƵĻ���ͼ��
		int j = 100 + i;
		_itoa_s(i, a, 10);
		_itoa_s(j, b, 10);
		windowsName_to_read = a;
		windowsName_to_write = b;
		sumName_to_read = fileName_to_read + windowsName_to_read + jpgName;
		sumName_to_write = fileName_to_write + windowsName_to_write + jpgName;
		Mat pl = imread(sumName_to_read);
		//std::cout << ph_1.type() << std::endl << CV_8UC3 << std::endl;;
		Mat ph_2 = Mat(768, 1024, CV_8UC3);
		int row_num = 768;
		int col_num = 1024;
		for (int j = 0; j < row_num; j++){
			
			unsigned char *data_ph_2 = ph_2.ptr<unsigned char>(j);
			unsigned char *data_pl = pl.ptr<unsigned char>(j);
			unsigned char *data_mask = mask.ptr<unsigned char>(j);
			for (int k = 0; k < col_num * 3; k++){
				//ת������ֵ0��1Ϊ0��255��
				data_ph_2[k] = data_pl[k];
				if (data_mask[k] == 255)
					data_ph_2[k] = 0;
			}
		}
		imwrite(sumName_to_write, ph_2);

	}

}
string make_pattern(string pro_mask_fileName)
{
	Mat ph_1 = imread("C://Users//jo//Desktop//123//Patterns//test//xor04//original//15.jpg");///////////////////////////////�����ƵĻ���ͼ��
	Mat mask = imread(pro_mask_fileName);
	//�õ�ͼ����ļ�λ��
	string windowsName;
	string fileName_to_read = "C://Users//jo//Desktop//123//Patterns//test//xor04//original//";
	string fileName_to_write = "C://Users//jo//Desktop//123//Patterns//test//test//";
	string jpgName = ".jpg";
	string sumName_to_read, sumName_to_write;
	char a[10];
	
	for (int i = 1; i <= 36; i++){
		//�ӵ�19����ʼ�����ú����ƵĻ���ͼ��
		if (i == 19)
			ph_1 = imread("C://Users//jo//Desktop//123//Patterns//test//xor04//original//33.jpg");/////////////////////////////�����ƵĻ���ͼ��

		_itoa_s(i, a, 10);
		windowsName = a;
		sumName_to_read = fileName_to_read + windowsName + jpgName;
		sumName_to_write = fileName_to_write + windowsName + jpgName;
		Mat pl = imread(sumName_to_read);
		//std::cout << ph_1.type() << std::endl << CV_8UC3 << std::endl;;
		Mat ph_2 = Mat(768, 1024, CV_8UC3);
		int row_num = 768;
		int col_num = 1024;
		unsigned char val_ph1, val_pl, val_ph2;
		for (int j = 0; j < row_num; j++){
			unsigned char * data_ph_1 = ph_1.ptr<unsigned char>(j);
			unsigned char *data_ph_2 = ph_2.ptr<unsigned char>(j);
			unsigned char *data_pl = pl.ptr<unsigned char>(j);
			unsigned char *data_mask = mask.ptr<unsigned char>(j);
			for (int k = 0; k < col_num * 3; k++){
				val_ph1 = data_ph_1[k];
				val_pl = data_pl[k];
				//ת������ֵΪ0��1ֵ��Ϊ�˽��а�λ���^
				if (val_ph1 == 255)
					val_ph1 = 1;
				if (val_pl == 255)
					val_pl = 1;
				//���õ���һ����Ƶͼ��
				val_ph2 = val_ph1 ^ val_pl;
				//ת������ֵ0��1Ϊ0��255��
				if (val_ph2 == 1)
					data_ph_2[k] = 255;
				else
					data_ph_2[k] = 0;
				if (data_mask[k]==255)
					data_ph_2[k] = 0;
			}
		}


		imwrite(sumName_to_write, ph_2);


	}
	//��ԭʼ�ļ�����maskͶӰͼ
	make_pattern_on_original(pro_mask_fileName);
	cout << "���pattern���ļ��е�λ�ã�" << fileName_to_write << endl;
	return fileName_to_write;
}


bool equal(string s_original, string s_out){

	vector<string> v1, v2;
	string::size_type pos1, pos2;
	for (int i = 0; i < s_original.size(); i++)
	{
		pos1 = s_original.find(" ", i);
		if (static_cast<int>(pos1) != string::npos)
		{

			string str = s_original.substr(i, pos1 - i);
			v1.push_back(str);
			i = static_cast<int>(pos1);
			//i--;
		}
		else
		{
			string str = s_original.substr(i, pos1 - i);
			v1.push_back(str);
			i = s_original.size();
		}

	}
	////
	for (int i = 0; i < s_out.size(); i++)
	{
		pos1 = s_out.find(" ", i);
		if (static_cast<int>(pos1) != string::npos)
		{

			string str = s_out.substr(i, pos1 - i);
			v2.push_back(str);
			i = static_cast<int>(pos1);
			//i--;
		}
		else
		{
			string str = s_out.substr(i, pos1 - i);
			v2.push_back(str);
			i = s_out.size();
		}

	}
	if (v1.size() != v2.size())
		return false;
	for (int i = 0; i < v1.size(); i++)
	{
		if (abs(atof(v1[i].c_str()) - atof(v2[i].c_str()))>0.00001)
			return false;

	}
	return true;
}

//�˺������ڽ�ȥ��ĵ���ԭ�ļ��б��Ϊ��1.#QNAN0 1.#QNAN0 1.#QNAN0
//���룺���˲������еĵ㣨infilter�����ļ���;���˲�����ĵ㣨outfilter�����ļ�����
//�����ȥ����pcd�ļ���

string make_final_pcd_file(string inFilter_fileName, string outFilter_fileName)
{
		string output_fileName;
		string s1 = "1.#QNAN0 1.#QNAN0 1.#QNAN0";//д�������
		//����ĵ�
		output_fileName = "C://Users//jo//Desktop//112//0509//0_write.pcd";
		fstream inFile_0(inFilter_fileName.c_str(), ios::in);
		fstream inFile_out(outFilter_fileName.c_str(), ios::in);
		fstream inFile_write(output_fileName.c_str(), ios::out);

		string str_return_1 = "open file error!";
		//string str_return_2 = "close file bad!";
		//string str_return_3 = "close file fail!";
		//string str_return_4 = "close file eof!";
		if (!inFile_0 || !inFile_out || !inFile_write)
		{
			std::cout<< str_return_1 << endl;
			return str_return_1;
		}
		std::string s_original,s_out;
		//int get_return_0, get_return1;
		//���������ļ���ͷ����
		int i = 0;
		int num(0);
		while (true)
		{
			i++;
			if (i <= 11)
			{
				getline(inFile_0, s_original);
				getline(inFile_out, s_out);
				inFile_write << s_original;
				inFile_write << "\n";
				continue;
			}
			if (i == 12)
			{
				getline(inFile_0, s_original);
				getline(inFile_out, s_out);
			}
			//cout << s << endl;
			if (equal(s_original, s_out))
			{
				//д�ļ�
				///////////////////
				//inFile_0.
				inFile_write << s1;
				inFile_write << "\n";
				num++;
				//������һ��
				getline(inFile_0, s_original);
				getline(inFile_out, s_out);
			}
			else
			{
				inFile_write << s_original;
				inFile_write << "\n";
				//ֻ��ԭʼ�ļ�������һ��
				getline(inFile_0, s_original);
	
			}
	
			if (inFile_0.eof())
				break;
		}
		//һ���ж��ٸ���ͬ�ĵ㣬�������ļ���
		//cout << num << endl;
		inFile_0.close();
		inFile_out.close();
		inFile_write.close();
		//if (inFile_0.eof() || inFile_out.eof())
		//	return str_return_4;
		//if (inFile_0.bad() || inFile_out.bad())
		//	return str_return_2;
		//if (inFile_0.fail() || inFile_out.fail())
		//	return str_return_3;
		cout << "make_final_pcd_file()  success!!!  return:" << output_fileName << endl;
		return output_fileName;
}

//�˺����Ĺ����Ǹ���ȥ���ĵ�����������ӽǵ�maskͼ��
//���룺ȥ����pcd�ļ�
//���������ӽ���maskͼ�����ļ���ַ
string make_cam_mask_image(string fileName){
	fstream inFile_write(fileName.c_str(), ios::in);
	string str_value;
	string str_error = "file open error!";
	if (!inFile_write)
		return str_error;
	int first_11(1);
	while (first_11 <= 11){
		first_11++;
		getline(inFile_write, str_value);
	}
	//ͨ��Ϊ1
	Mat ph_2 = Mat(576, 768, CV_8UC1);
	int row_num = 576;
	int col_num = 768;
	int count(0);
	for (int j = 0; j < row_num; j++){
		unsigned char *data_ph_2 = ph_2.ptr<unsigned char>(j);
		for (int k = 0; k < col_num; k++){
			getline(inFile_write, str_value);
			int pos1;
			vector<string> v1;
			//��ÿһ�����string�����ָ���뵽vector��
			for (int i = 0; i < str_value.size(); i++)
			{
				pos1 = str_value.find(" ", i);
				if (static_cast<int>(pos1) != string::npos)
				{

					string str = str_value.substr(i, pos1 - i);
					v1.push_back(str);
					i = static_cast<int>(pos1);
					//i--;
				}
				else
				{
					string str = str_value.substr(i, pos1 - i);
					v1.push_back(str);
					i = str_value.size();
				}

			}
			if (v1[0] == "1.#QNAN0")
			{
				*(data_ph_2 + k) = 0;
				//count++;
			}
			else
			{
				*(data_ph_2 + k) = 255;
				//count++;
			}

		}
	}
	//cout << "count:" << count << endl;
	//ע�����ͼ��Ϊbmp��ʽ�������jpg��ʽ������Ż����Ҷ�ֵ�ı�
	string output_fileName = "C://Users//jo//Desktop//112//0509//cam_mask.bmp";
	imwrite(output_fileName, ph_2);
	cout << "make_cam_mask_image()  success!!!  return:" << output_fileName << endl;
	return output_fileName;

}
//�˺����Ĺ����Ǹ�������ӽǵ�maskͼ�������ֵ���ݣ�.xml����������ͶӰ���ӽǵ�maskͼ����
//���룺decode�����룩���ݣ��Լ�����ӽ���maskͼ����
//�����
string make_proj_mask_image(string xml_fileName, string cam_mask_fileName){
	
	//�������ݣ������ж���uncertain�ĵ���std::numeric_limits<float>::quiet_NaN();
	//������Ҫ���ǳ������뷶Χ�ĵ㣨0-1023��0-767��
	cv::FileStorage fs_r(xml_fileName, cv::FileStorage::READ);
	cv::Mat mat_decode;
	fs_r["vocabulary"] >> mat_decode;
	Mat mask = imread(cam_mask_fileName, 0);
	//cout << mask.cols<< endl;
	Mat pl = Mat(768, 1024, CV_8UC1,cv::Scalar(0));
	//imwrite("C://Users//jo//Desktop//112//0509//test.jpg", pl);
	//�ȶԱ���ͼ�����mask������
	int row_num = 576;
	int col_num = 768;
	int pos = 0;
	int count(0);
	for (int i = 0; i < row_num; i++)
	{
		cv::Vec2f * pattern_row_c = mat_decode.ptr<cv::Vec2f>(i);
		unsigned char * mask_data = mask.ptr<unsigned char>(i);
		for (int j = 0; j < col_num; j++)
		{
			pos = i * 768 + j;
			cv::Vec2f & pattern = pattern_row_c[j];
			unsigned char mask_value = *(mask_data + j);
			if (*(mask_data + j) == 255)
			{
				if (pattern[0] < 0 || pattern[0] >= 1024 || pattern[1] < 0 || pattern[1] >= 768)
				{
					continue;
				}
				int col_value = pattern[0];
				int row_value = pattern[1];
				//count++;
				//std::cout << pattern[1] << " " << pattern[0] << std::endl;
				pl.at<unsigned char>(row_value, col_value) = 255;
			}
				
		}
	}
	//cout << "count:" << count << endl;
	string output_fileName = "C://Users//jo//Desktop//112//0509//pro_mask.bmp";
	imwrite(output_fileName, pl);
	cout << "make_proj_mask_image()  success!!!  return:" << output_fileName << endl;
	return output_fileName;
}

void test(){
	Mat mask1 = imread("C://Users//jo//Desktop//112//0509//mask.jpg");
	Mat mask2 = imread("C://Users//jo//Desktop//112//0509//mask_2.jpg");
	Mat pl = Mat(576, 768, CV_8UC1, cv::Scalar(0));
	int row_num = 576;
	int col_num = 768;
	for (int i = 0; i < row_num; i++)
	{
		unsigned char * mask_data1 = mask1.ptr<unsigned char>(i);
		unsigned char * mask_data2 = mask2.ptr<unsigned char>(i);
		unsigned char * mask_data3 = pl.ptr<unsigned char>(i);
		for (int j = 0; j < col_num; j++)
		{
			int value1 = *(mask_data1 + j);
			int value2 = *(mask_data2 + j);
			
			if (value1 == 0 && value2 == 255)
				*(mask_data3 + j) = 0;
			if (value1 == 255 && value2 == 0)
				*(mask_data3 + j) = 0;

		}
	}
	imwrite("C://Users//jo//Desktop//112//0509//test.jpg", pl);

}
//�˺����Ĺ�������̬ѧ���������ʵ�maskͼ��
string morphology(string fileName){
	//ԭʼͼ��
	Mat image = imread(fileName);
	//Mat result;
	namedWindow("O");
	imshow("O", image);
	//��̬ѧ����
	Mat result1;
	morphologyEx(image, result1, cv::MORPH_CLOSE, cv::Mat());
	erode(result1, result1, cv::Mat(), cv::Point(-1, -1), 1);
	morphologyEx(result1, result1, cv::MORPH_CLOSE, cv::Mat(), cv::Point(-1, -1), 5);
	erode(result1, result1, cv::Mat(), cv::Point(-1, -1), 1);
	morphologyEx(result1, result1, cv::MORPH_OPEN, cv::Mat(), cv::Point(-1, -1), 2);
	namedWindow("B");
	imshow("B", result1);
	//�Աȣ���mask�����ԭʼͼ����
	Mat image1 = image.clone();
	//cout << image.channels();
	int row_num = 768;
	int col_num = 1024;
	for (int i = 0; i < row_num; i++)
	{
		unsigned char * mask_data1 = image1.ptr<unsigned char>(i);
		unsigned char * mask_data2 = result1.ptr<unsigned char>(i);
		for (int j = 0; j < col_num*3; j+=3)
		{
			if (mask_data2[j] == 255)
			{
				mask_data1[j] = 255;
				mask_data1[j + 1] = 0;
				mask_data1[j + 2] = 0;
			}

		}
	}
	namedWindow("mark");
	imshow("mark", image1);

	//waitKey(0);
	string output_fileName = "C://Users//jo//Desktop//112//0509//final_mask.bmp";
	imwrite(output_fileName, result1);
	return output_fileName;


}
int main(){

	

	string fileName_0, fileName_out;
	//ԭʼ�ļ�
	fileName_0 = "C://Users//jo//Desktop//112//0509//0.pcd";
	//��ɾ���ĵ�
	fileName_out = "C://Users//jo//Desktop//112//0509//0_outliers.pcd";
	string final_pcd_fileName=make_final_pcd_file(fileName_0, fileName_out);

	//�˺����Ĺ����Ǹ���ȥ���ĵ�����������ӽǵ�maskͼ��,����ȥ���pcd�ļ���0_write.pcd��
	string cam_mask_fileName = make_cam_mask_image(final_pcd_fileName);
	
	//�˺����Ĺ����Ǹ�������ӽǵ�maskͼ�������ֵ���ݣ�.xml���ݣ�������ͶӰ���ӽǵ�maskͼ����
	string pro_mask_fileName=make_proj_mask_image("C://Users//jo//Desktop//112//0509//pattern_image.xml", cam_mask_fileName);
	
	//��̬ѧ����projector�ӽǵ�maskͼ��
	string final_mask_fileName=morphology(pro_mask_fileName);
	
	//�����������ͶӰͼ��
	string pattern_fileName = make_pattern(final_mask_fileName);

	cout << "finish!" << endl;
	waitKey(0);
	getchar();
	return 0;
}
