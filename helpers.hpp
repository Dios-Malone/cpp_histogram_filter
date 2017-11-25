#ifndef HELPERS_H
#define HELPERS_H

std::vector< std::vector<float> > normalize(std::vector< std::vector <float> > grid);

std::vector< std::vector <float> > getBlurringGrid(float blurring);

std::vector < std::vector <float> > blur(std::vector < std::vector < float> > grid, float blurring);

bool close_enough(std::vector < std::vector <float> > g1, std::vector < std::vector <float> > g2);

bool close_enough(float v1, float v2);

std::vector <char> read_line(std::string s);

std::vector < std::vector <char> > read_map(std::string file_name);

std::vector < std::vector <float> > zeros(int height, int width);

#endif /* HELPERS_H */