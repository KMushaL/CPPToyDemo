/*
 * @Author: Poet 602289550@qq.com
 * @Date: 2023-05-05 16:19:36
 * @LastEditors: WangLei
 * @LastEditTime: 2023-12-19 19:04:48
 * @FilePath: \cpp_stdExample\vector_reserve_resize.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置
 * 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>

int main() {
  // std::vector<int> vec;
  // // vec.reserve(10); // 预先分配好空间
  // vec.resize(2); // 分配好实际空间，且全都默认初始化为0
  // std::cout << vec.size() << std::endl;
  // vec.emplace_back(2); //
  // 如果是reserve则第一个元素为2，如果是resize则第三个元素为2 std::cout <<
  // vec.size() << std::endl; // 如果是reserve则为1，如果是resize则是3

  // for (int i = 0; i < vec.size(); ++i) {
  //   std::cout << vec[i] << std::endl;
  // }

  std::vector<int> vec;
  vec.reserve(4);
  vec.emplace_back(0);
  vec.emplace_back(1);
  vec.emplace_back(2);
  vec.emplace_back(3);
  for (int val : vec) {
    std::cout << val << " ";
  }
  std::cout << "\n=========\n";
  vec.clear();
  std::cout << "vec.size = " << vec.size() << std::endl;
  vec.emplace_back(0);
  vec.emplace_back(1);
  vec.emplace_back(2);
  vec.emplace_back(3);
  for (int val : vec) {
    std::cout << val << " ";
  }
  std::cout << "\n=========\n";

  std::unordered_map<int, double> temp;
  std::cout << temp[0] << std::endl;

  return 0;
}