// #include <bits/stdc++.h>

// int main()
// {
//     std::string input;
//     getline(std::cin, input);

//     std::stringstream ss(input);
//     std::string ele;
//     std::vector<int> vi;
//     std::vector<std::string> vs;
//     std::vector<float> vf;

//     while (getline(ss, ele, ','))
//     {
//         std::string sele;
//         std::string iele;
//         std::string fele;
//         std::stringstream ssele(ele);
//         getline(ssele, sele,',');
//         vs.push_back(sele);
//         getline(ssele, iele,',');
//         vi.push_back(stoi(iele));
//         getline(ssele, fele,',');
//         vf.push_back(stof(fele));
//     }

//     for (int i = 0; i < vf.size(); i++)
//     {
//         std::cout << vf[i] << " ";
//     }
//     std::cout << std::endl;

//     for (int i = 0; i < vs.size(); i++)
//     {
//         std::cout << vs[i] << " ";
//     }
//     std::cout << std::endl;
//     for (int i = 0; i < vi.size(); i++)
//     {
//         std::cout << vi[i] << " ";
//     }
//     std::cout << std::endl;
// }

#include <bits/stdc++.h>

int main()
{
    std::string input;
    getline(std::cin, input);

    std::stringstream ss(input);
    std::string ele;
    std::vector<int> vi;
    std::vector<std::string> vs;
    std::vector<float> vf;

    while (getline(ss, ele, ',')) // Split by comma first
    {
        std::stringstream ssele(ele);
        std::string sele, iele, fele;

        // Assuming each 'ele' is formatted like 'string,int,float'
        getline(ssele, sele, ':'); // String before the first colon
        getline(ssele, iele, ':'); // Int before the second colon
        getline(ssele, fele); // Float part

        vs.push_back(sele);
        vi.push_back(stoi(iele));
        vf.push_back(stof(fele));
    }

    // Print float vector
    for (float val : vf)
    {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    // Print string vector
    for (const std::string& val : vs)
    {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    // Print int vector
    for (int val : vi)
    {
        std::cout << val << " ";
    }
    std::cout << std::endl;
}
//input is : name:10:3.14,name2:20:4.56,name3:30:6.78
