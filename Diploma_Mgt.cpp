#include<iostream>
using namespace std;
/////////////////////////
void firstYearSemester1()
{
    int sem1;
    cout << "Select subject:\n"
         "🔅Fundamental of ICT     (1)\n"
         "🔅Engineering graphics   (2)\n"
         "🔅Workshop practice      (3)\n"
         "🔅English                (4)\n"
         "🔅Basic science          (5)\n"
         "🔅Basic mathematics      (6)\n" << endl;
    cin >> sem1;

    switch(sem1)
    {
    case 1:
    {
        cout << "🔈Subject code = 22001 (practical)" << endl;
        cout << "1. Introduction to computer system" << endl;
        cout << "2. Word processing" << endl;
        cout << "3. Spread sheets" << endl;
        cout << "4. Presentation tools" << endl;
        cout << "5. Basics of internet" << endl;
    }
    break;
    case 2:
    {
        cout << "🔈Subject code = 22002 (practical)" << endl;
        cout << "1. Basic elements of drawing" << endl;
        cout << "2. Engineering curves and loci of points" << endl;
        cout << "3. Orthographic projections" << endl;
        cout << "4. Isometric projections" << endl;
        cout << "5. Free hand sketch of engineering elements" << endl;
    }
    break;
    case 3:
    {
        cout << "🔈Subject code = 22004 (practical)" << endl;
        cout << "1. General Workshop practice" << endl;
        cout << "2. Fitting" << endl;
        cout << "3. Plumbing" << endl;
        cout << "4. Metal joining" << endl;
        cout << "5. Furniture making" << endl;
        cout << "6. Sheet metal" << endl;
    }
    break;
    case 4:
    {
        cout << "🔈Subject code = 22101 (Theory & practical)" << endl;
        cout << "1. Applied grammar                [14]"<< endl;
        cout << "2. Comprehension.                 [24]" << endl;
        cout << "3. Paragraph and dialogue writing.[12]" << endl;
        cout << "4. Vocabulary building.           [12]" << endl;
        cout << "5. Speeches.                      [08]" << endl;
    }
    break;
    case 5:
    {
        cout << "🔈Subject code = 22102 (Theory & practical)" << endl;
        cout << "🛡 Physics 🛡" << endl;
        cout << "1. Units and measurements.         [05]" << endl;
        cout << "2. Electricity, magnetism,\n"
             "   and semiconductors              [16]" << endl;
        cout << "3. Heat and optics.                [08]" << endl;
        cout << "🛡 Chemistry 🛡" << endl;
        cout << "4. Chemical bonding and catalysis  [08]" << endl;
        cout << "5. Corrosion and its prevention \n"
             "   and electrochemistry.           [14]" << endl;
        cout << "6. Paints, Varnishes, \n"
             "   Insulators, Polymers,\n"
             "   Adhesives, Lubricants.          [22]" << endl;
    }
    break;
    case 6:
    {
        cout << "🔈Subject code = 22103 (Theory & practical)" << endl;
        cout << "1. Algebra.              [20]" << endl;
        cout << "2. Trigonometry.         [20]" << endl;
        cout << "3. Co-ordinate geometry. [08]" << endl;
        cout << "4. Mensuration.          [08]" << endl;
        cout << "5. Statistics.           [14]" << endl;
    }
    break;
    }
};
//////////////////////////
void firstYearSemester2()
{
    int sem2;
    cout << "Select subject:\n"
         "🔅Elements of electrical engineering.  (1)\n"
         "🔅Applied mathematics.                 (2)\n"
         "🔅Basic electronics                    (3)\n"
         "🔅Programming in C.                    (4)\n"
         "🔅Business communication using\n"
         "  computers.                           (5)\n"
         "🔅Computer peripheral and hardware \n"
         "  maintenance.                         (6)\n"
         "🔅Web page designing with HTML.        (7)\n" << endl;
    cin >> sem2;

    switch(sem2)
    {
    case 1:
    {
        cout << "🔈Subject code=22215 (Theory and practical)" << endl;
        cout << "1.Magnetic circuits.                 [10m]" << endl;
        cout << "2.AC fundamentals.                   [10m]" << endl;
        cout << "3.Polyphase AC circuit.              [08m]" << endl;
        cout << "4.Transformer and DC motors.         [14m]" << endl;
        cout << "5.Fractional horse power"                << endl;
        cout << "  (FHP) motors                       [12m]" << endl;
        cout << "6.Protective devices and switchgear  [10m]" << endl;
    }
    break;
    case 2:
    {
        cout << "🔈Subject code=22224(Theory and practical)" << endl;
        cout << "1.Differential calculus.              [20m]" << endl;
        cout << "2.Integral calculus.                  [14m]" << endl;
        cout << "3.Application of definite integration [10m]" << endl;
        cout << "4.First order first-degree \n"                << endl;
        cout << "  and differential equations.         [08m]" << endl;
        cout << "5.Numerical equations.                [12m]" << endl;
    }
    break;
    case 3:
    {
        cout << "🔈Subject code=22225(Theory and practical)" << endl;
        cout << "1. Electronic components and signal  [08m]" << endl;
        cout << "2. Diodes and their application.     [10m]" << endl;
        cout << "3. Bipolar junction transistor.      [14m]" << endl;
        cout << "4. Field effect transistors.         [08m]" << endl;
        cout << "5. Sensors and transducers.          [08m]" << endl;
    }
    break;
    case 4:
    {
        cout << "🔈Subject code=22226(Theory and practical)" << endl;
        cout << "1. Program logic development.       [04m]" << endl;
        cout << "2. Basics of C programming.         [06m]" << endl;
        cout << "3. Control structure.               [10m]" << endl;
        cout << "4. Array and structure.             [12m]" << endl;
        cout << "5. Functions.                       [10m]" << endl;
        cout << "6. Pointers.                        [06m]" << endl;
    }
    break;
    case 5:
    {
        cout << "🔈Subject code=22009(practical)" << endl;
        cout << "1. Introduce to business communication" << endl;
        cout << "2. Non-verbal communication" << endl;
        cout << "3. Presentation skills" << endl;
        cout << "4. Office drafting" << endl;
        cout << "5. Business Correspondence" << endl;

    }
    break;
    case 6:
    {
        cout << "🔈Subject code=22013(practical)" << endl;
        cout << "1. Features of computer networks" << endl;
        cout << "2. Motherboards" << endl;
        cout << "3. Procedure and BIOS" << endl;
        cout << "4. Hard disks" << endl;
        cout << "5. I/O and modern" << endl;
        cout << "6. Power supply" << endl;
    }
    break;
    case 7:
    {
        cout << "🔈Subject code=22014(practical)" << endl;
        cout << "1. Basics of HTML" << endl;
        cout << "2. Tags and lists" << endl;
        cout << "3. URL and images" << endl;
        cout << "4. Table and frames" << endl;
        cout << "5. Cascading style sheets" << endl;
        cout << "6. Website hosting" << endl;
    }
    break;
    }
};
///////////////////////
void secondYearSemester3()
{
    int sem3;
    cout << "Select subject:\n"
         << "🔅Object oriented programming using C++ (1)\n"
         << "🔅Data structure using C.               (2)\n"
         << "🔅Principle of database.                (3)\n"
         << "🔅Data communication.                   (4)\n"
         << "🔅Digital techniques and microprocessor (5)\n"
         << "🔅Applied multimedia techniques.        (6)\n"
         << endl;
    cin >> sem3;

    switch (sem3)
    {
    case 1:
    {
        cout << "🔈Subject code=22316(Theory and practical)" << endl;
        cout << "1. Principle of object-oriented programming. [14]" << endl;
        cout << "2. Classes and objects.                      [18]" << endl;
        cout << "3. Extending classes using inheritance.      [16]" << endl;
        cout << "4. Pointer and polymorphism in C++.          [14]" << endl;
        cout << "5. File operations.                          [08]" << endl;
    }
    break;
    case 2:
    {
        cout << "🔈Subject code=22317(Theory and practical)" << endl;
        cout << "1. Introduction to data structure. [06]" << endl;
        cout << "2. Searching and sorting.          [12]" << endl;
        cout << "3. Stacks and queues.              [20]" << endl;
        cout << "4. Linked lists.                   [16]" << endl;
        cout << "5. Trees and graphs.               [16]" << endl;
    }
    break;
    case 3:
    {
        cout << "🔈Subject code=22321(Theory and practical)" << endl;
        cout << "1. Basics of database and architecture. [12]" << endl;
        cout << "2. Data models and data types.          [12]" << endl;
        cout << "3. Database design using ER model.      [14]" << endl;
        cout << "4. Relational database model.           [18]" << endl;
        cout << "5. Normalization.                       [14]" << endl;
    }
    break;
    case 4:
    {
        cout << "🔈Subject code=22322(Theory and practical)" << endl;
        cout << "1. Introduction to data communication. [14]" << endl;
        cout << "2. Transmission media.                 [14]" << endl;
        cout << "3. Multiplexing and switching.         [16]" << endl;
        cout << "4. Error detection and correction.     [16]" << endl;
        cout << "5. Wireless communication.             [10]" << endl;
    }
    break;
    case 5:
    {
        cout << "🔈Subject code=22323(Theory and practical)" << endl;
        cout << "1. Number systems, digital logic family,\n"
             << "   and logic gates.                     [16]" << endl;
        cout << "2. Combinational logic circuit.         [14]" << endl;
        cout << "3. Sequential logic circuit.            [12]" << endl;
        cout << "4. Microprocessor 8086 and modern\n"
             << "   microprocessor.                      [12]" << endl;
        cout << "5. Assembly language programming\n "
             "   using 8086.                          [16]" << endl;
    }
    break;
    case 6:
    {
        cout << "🔈Subject code=22024(practical)" << endl;
        cout << "1. Introduction to multimedia." << endl;
        cout << "2. Image editing and compression." << endl;
        cout << "3. Web page development using multimedia." << endl;
        cout << "4. Create 2D animation." << endl;
        cout << "5. Create 3D animation." << endl;
    }
    break;
    }
}

/////////////////////
void secondYearSemester4()
{
    int sem4;
    cout << "Select subject:\n";
    cout << "🔅Java programming.           (1)\n";
    cout << "🔅Software engineering        (2)\n";
    cout << "🔅Database management.        (3)\n";
    cout << "🔅Computer network.           (4)\n";
    cout << "🔅GUI application development\n"
         "  using VB.net.               (5)\n";
    cin >> sem4;
    switch(sem4)
    {
    case 1:
    {
        cout << "🔈 Subject code=22412(Theory and practical)" << endl;
        cout << "1.Basic Syntactical constructs\n"
             "  in Java.                      [10]" << endl;
        cout << "2.Derived Syntactical Constructs \n"
             "  in Java.                      [18]" << endl;
        cout << "3.Inheritance, Interface\n"
             "  and Package.                  [12]" << endl;
        cout << "4.Exception Handling and \n"
             "  Multithreading.               [12]" << endl;
        cout << "5.Java Applets and Graphics\n"
             "  Programming                   [10]" << endl;
        cout << "6.Managing Input/Output/Files\n"
             "  in Java.                      [08]" << endl;
    }
    break;
    case 2:
    {
        cout << "🔈 Subject code=22413(Theory & practical)" << endl;
        cout << "Software development process.      [12]" << endl;
        cout << "Software Requirement Engineering.  [14]" << endl;
        cout << "Software Modelling and Design.     [14]" << endl;
        cout << "Software Project Estimation.       [16]" << endl;
        cout << "Software Project Management and \n"
             "quality assurance.                 [14]" << endl;
    }
    break;
    case 3:
    {
        cout << "🔈 Subject code=22416(Theory and practical)" << endl;
        cout << "1.Creating Relational Database [08]" << endl;
        cout << "2.Interactive SQL for\n"
             "  data extraction.             [18]" << endl;
        cout << "3.Advance features of SQL.     [16]" << endl;
        cout << "4.PL/SQL Programming.          [16]" << endl;
        cout << "5.Database security and\n"
             "  Transaction Processing.      [12]" << endl;
    }
    break;
    case 4:
    {
        cout << "🔈 Subject code=22417(Theory and practical)\n"
             << "1.Fundamentals of Computer Network.[14]\n"
             << "2.Network Components and\n"
             "  Topologiesb.                     [16]\n"
             << "3.Reference Models for\n"
             "  Computer Networks.               [16]\n"
             << "4.TCP/IP Protocol Suite.           [12]\n"
             << "5.IP Addressing.                   [12]" << endl;
    }
    break;
    case 5:
    {
        cout << "🔈 Subject code=22034(practical)\n"
             << "1.overview of GUI programming\n"
             << "2.decision control and loop control\n"
             << "3.object oriented programming in VB.net\n"
             << "4.data access in VB.net\n"
             << "5.data binding and deployment" << endl;
    }
    break;
    }
};
/////////////////
void thirdyearsemester5()
{
    int sem4;
    cout << "Select subject:\n";
    cout << "🔅Environmental Studies             (1)\n";
    cout << "🔅Operating Systems                 (2)\n";
    cout << "🔅Advanced Java Programming         (3)\n";
    cout << "🔅Elective-I                        (4)\n";
    cout << "🔅Entrepreneurship Development      (5)\n";
    cout << "🔅Industrial Training               (6)\n";
    cout << "🔅Capstone Project Planning         (7)\n";
    cin >> sem4;
    switch(sem4)
  {
    case 1:
    {
        cout << "🔈 Subject code=22447(Theory&practical)\n"
             << "1. Environment.                    [10]\n"
             << "2. Energy and resources.           [16]\n"
             << "3. Ecosystem and biodiversity.     [12]\n"
             << "4. Environmental pollution.        [20]\n"
             << "5. Social issues and environmental\n"
             << "   education.                      [12]" << endl;
    }
    break;
    case 2:
    {
    cout << "🔈 Subject code=22516(Theory&practical)\n"
             << "1. overview of operating system.  [08]\n"
             << "2. services and components \n"
                "   of operating system.           [10]\n"
             << "3. process management.            [14]\n"
             << "4. CPU scheduling and algorithms  [14]\n"
             << "5. memory management.             [14]\n"
             << "6. file management.               [10]" << endl;
    }
    break;
    case 3:
    {
    cout << "🔈 Subject code=22517(Theory&practical)\n"
             << "1. Abstract windowing \n"
                "   toolkit(AWT).                  [12]\n"
             << "2. Swings.                        [10]\n"
             << "3. Event handling .               [12]\n"
             << "4. Networking basics.             [10]\n"
             << "5. Interacting with database      [12]\n"
             << "6. Servlets.                      [14]" << endl;
    }
    break;
    case 4:
    {
    int elective;
      cout << "Select subject:\n" << endl;
      cout << "🔅Client side scripting language.  (1)\n"
           << "🔅Advanced computer network.       (2)\n"
           << "🔅open source operating system \n"
              "  & scripting language.            (3)" << endl;
      cin >>elective; 
      switch(elective) 
      {
      case 1:
      {
      cout << "🔈 Subject code=22447(Theory&practical)\n"
             << "1. Environment.                    [10]\n"
             << "2. Energy and resources.           [16]\n"
             << "3. Ecosystem and biodiversity.     [12]\n"
             << "4. Environmental pollution.        [20]\n"
             << "5. Social issues and environmental\n"
             << "   education.                      [12]" << endl;
      }
      break;
      case 2:
      {
      cout << "🔈 Subject code=22447(Theory&practical)\n"
             << "1. Environment.                    [10]\n"
             << "2. Energy and resources.           [16]\n"
             << "3. Ecosystem and biodiversity.     [12]\n"
             << "4. Environmental pollution.        [20]\n"
             << "5. Social issues and environmental\n"
             << "   education.                      [12]" << endl;
      }
      break;
      case 3:
      {
      cout << "🔈 Subject code=22447(Theory&practical)\n"
             << "1. Environment.                    [10]\n"
             << "2. Energy and resources.           [16]\n"
             << "3. Ecosystem and biodiversity.     [12]\n"
             << "4. Environmental pollution.        [20]\n"
             << "5. Social issues and environmental\n"
             << "   education.                      [12]" << endl;
      }
      }      
    }
    break;
    case 5:
    {
    cout << "🔈 Subject code=22032(practical)\n"
             << "1. Entrepreneurship \n"
                "   development-scope & concept.\n"
             << "2. entrepreneur opportunity \n"
                "   and selection process.\n"
             << "3. support system.\n"
             << "4. business plan preparation.\n"
             << "5. managing enterprise.\n" << endl;
    }
    break;
    case 6:
    {
    cout << "Subject code=_(practical)\nRefer mannual" << endl;
    }
    break;
    case 7:
    {
    cout << "🔈 Subject code=22058(practical)\nRefer mannual" << endl;
    }
    break;
    default:
    {
    cout << "invalid choise" << endl;
    }
  }

}
int main() {
    char repeat;
    do {
        cout << "========================================" << endl;
        cout << "    COMPUTER MANAGMENT SYLLABUS " << endl;
        cout << "========================================" << endl;
        cout << "\n\nEnter 1-9 to start:" << endl;

        int userChoice;
        cin >> userChoice;

        if (userChoice >= 1 && userChoice <= 9)
        {
            int year;
            cout << "Select year:" << endl;
            cout << " ◽First year    (1)\n ◽Second year   (2)\n ◽Third year    (3)" << endl;
            cin >> year;

            switch (year)
            {
            case 1:
                // First year
                int year1;
                cout << "Select semester:" << endl;
                cout << "🔸First semester (1)\n🔸Second semester (2)" << endl;
                cin >> year1;

                switch (year1)
                {
                case 1:
                    firstYearSemester1();
                    break;
                case 2:
                    firstYearSemester2();
                    break;
                default:
                    cout << "Invalid semester choice." << endl;
                }
                break;

            case 2:
                // Second year
                int year2;
                cout << "Select semester:" << endl;
                cout << "🔸Third semester  (3)\n🔸Fourth semester (4)" << endl;
                cin >> year2;

                switch (year2)
                {
                case 3:
                    secondYearSemester3();
                    break;
                case 4:
                    secondYearSemester4();
                    break;
                default:
                    cout << "Invalid semester choice." << endl;
                }
                break;

            case 3:
                // Third year
                int year3;
                cout << "Select semester:" << endl;
                cout << "🔸Fifth semester  (5)\n"
                        "🔸Sixth semester  (6)" << endl;
                cin
