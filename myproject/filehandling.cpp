#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;

const int MAX = 50;

// ── GLOBAL DATA ARRAYS ─────────────────────────────────────────────────────

string res_name[MAX];
int    res_qty[MAX];
string res_type[MAX];
int    res_count = 0;

string zone_name[MAX];
int    zone_pop[MAX];
string zone_sev[MAX];
int    zone_count = 0;

string req_zone[MAX];
string req_item[MAX];
int    req_qty[MAX];
string req_status[MAX];
int    req_count = 0;

string vol_name[MAX];
string vol_skill[MAX];
string vol_status[MAX];
int    vol_count = 0;


// ═══════════════════════════════════════════════════════════════════════════
//  FILE HANDLING FUNCTIONS  
// ═══════════════════════════════════════════════════════════════════════════

// ---------- RESOURCES ----------

void saveResources()
{
    fstream myfile;
    myfile.open("resources.txt", ios::out);
    myfile << res_count << "\n";
    for (int i = 0; i < res_count; i++)
    {
        myfile << res_name[i] << "\n";
        myfile << res_qty[i]  << "\n";
        myfile << res_type[i] << "\n";
    }
    myfile.close();
}

void loadResources()
{
    fstream myfile;
    myfile.open("resources.txt", ios::in);
    if (!myfile)
    {
        
        res_count = 6;
        res_name[0] = "Wheat Flour (50kg)";  res_qty[0] = 1800;  res_type[0] = "Food";
        res_name[1] = "Drinking Water (L)";  res_qty[1] = 45000; res_type[1] = "Water";
        res_name[2] = "First Aid Kits";      res_qty[2] = 420;   res_type[2] = "Medical";
        res_name[3] = "Relief Tents";        res_qty[3] = 310;   res_type[3] = "Shelter";
        res_name[4] = "Blankets";            res_qty[4] = 900;   res_type[4] = "Shelter";
        res_name[5] = "ORS / Medicine";      res_qty[5] = 650;   res_type[5] = "Medical";
        saveResources();
        return;
    }
    myfile >> res_count;
    myfile.ignore();
    for (int i = 0; i < res_count; i++)
    {
        getline(myfile, res_name[i]);
        myfile >> res_qty[i];
        myfile.ignore();
        getline(myfile, res_type[i]);
    }
    myfile.close();
}

// ---------- ZONES ----------

void saveZones()
{
    fstream myfile;
    myfile.open("zones.txt", ios::out);
    myfile << zone_count << "\n";
    for (int i = 0; i < zone_count; i++)
    {
        myfile << zone_name[i] << "\n";
        myfile << zone_pop[i]  << "\n";
        myfile << zone_sev[i]  << "\n";
    }
    myfile.close();
}

void loadZones()
{
    fstream myfile;
    myfile.open("zones.txt", ios::in);
    if (!myfile)
    {
        
        zone_count = 5;
        zone_name[0] = "Rajanpur";     zone_pop[0] = 92000; zone_sev[0] = "Critical";
        zone_name[1] = "Muzaffargarh"; zone_pop[1] = 80000; zone_sev[1] = "Critical";
        zone_name[2] = "D.G. Khan";    zone_pop[2] = 51000; zone_sev[2] = "High";
        zone_name[3] = "Layyah";       zone_pop[3] = 40000; zone_sev[3] = "High";
        zone_name[4] = "Bhakkar";      zone_pop[4] = 21000; zone_sev[4] = "Moderate";
        saveZones();
        return;
    }
    myfile >> zone_count;
    myfile.ignore();
    for (int i = 0; i < zone_count; i++)
    {
        getline(myfile, zone_name[i]);
        myfile >> zone_pop[i];
        myfile.ignore();
        getline(myfile, zone_sev[i]);
    }
    myfile.close();
}

// ---------- AID REQUESTS ----------

void saveRequests()
{
    fstream myfile;
    myfile.open("requests.txt", ios::out);
    myfile << req_count << "\n";
    for (int i = 0; i < req_count; i++)
    {
        myfile << req_zone[i]   << "\n";
        myfile << req_item[i]   << "\n";
        myfile << req_qty[i]    << "\n";
        myfile << req_status[i] << "\n";
    }
    myfile.close();
}

void loadRequests()
{
    fstream myfile;
    myfile.open("requests.txt", ios::in);
    if (!myfile)
    {
        
        req_count = 5;
        req_zone[0] = "Rajanpur";     req_item[0] = "Wheat Flour (50kg)";  req_qty[0] = 500;   req_status[0] = "Pending";
        req_zone[1] = "Muzaffargarh"; req_item[1] = "Drinking Water (L)";  req_qty[1] = 12000; req_status[1] = "Pending";
        req_zone[2] = "D.G. Khan";    req_item[2] = "Relief Tents";        req_qty[2] = 80;    req_status[2] = "Approved";
        req_zone[3] = "Layyah";       req_item[3] = "ORS / Medicine";      req_qty[3] = 150;   req_status[3] = "Pending";
        req_zone[4] = "Bhakkar";      req_item[4] = "Blankets";            req_qty[4] = 200;   req_status[4] = "Approved";
        saveRequests();
        return;
    }
    myfile >> req_count;
    myfile.ignore();
    for (int i = 0; i < req_count; i++)
    {
        getline(myfile, req_zone[i]);
        getline(myfile, req_item[i]);
        myfile >> req_qty[i];
        myfile.ignore();
        getline(myfile, req_status[i]);
    }
    myfile.close();
}

// ---------- VOLUNTEERS ----------

void saveVolunteers()
{
    fstream myfile;
    myfile.open("volunteers.txt", ios::out);
    myfile << vol_count << "\n";
    for (int i = 0; i < vol_count; i++)
    {
        myfile << vol_name[i]   << "\n";
        myfile << vol_skill[i]  << "\n";
        myfile << vol_status[i] << "\n";
    }
    myfile.close();
}

void loadVolunteers()
{
    fstream myfile;
    myfile.open("volunteers.txt", ios::in);
    if (!myfile)
    {
        
        vol_count = 5;
        vol_name[0] = "daniya ";  vol_skill[0] = "Medical";   vol_status[0] = "Active";
        vol_name[1] = "fatima";   vol_skill[1] = "Medical";   vol_status[1] = "Active";
        vol_name[2] = " zanish";  vol_skill[2] = "Rescue";    vol_status[2] = "Active";
        vol_name[3] = "Sadia ";   vol_skill[3] = "Logistics"; vol_status[3] = "Available";
        vol_name[4] = "ayesha";   vol_skill[4] = "Rescue";    vol_status[4] = "Available";
        saveVolunteers();
        return;
    }
    myfile >> vol_count;
    myfile.ignore();
    for (int i = 0; i < vol_count; i++)
    {
        getline(myfile, vol_name[i]);
        getline(myfile, vol_skill[i]);
        getline(myfile, vol_status[i]);
    }
    myfile.close();
}

// ---------- LOAD ALL / SAVE ALL ----------

void loadAllData()
{
    loadResources();
    loadZones();
    loadRequests();
    loadVolunteers();
}


// ═══════════════════════════════════════════════════════════════════════════
//  RESOURCE FUNCTIONS
// ═══════════════════════════════════════════════════════════════════════════

void viewResources()
{
    system("cls");
    cout << " #   Name                  Qty      Type" << endl;
    cout << "-------------------------------------------" << endl;
    for (int i = 0; i < res_count; i++)
        if (res_name[i] != "")
            cout << " " << i + 1 << ".  " << res_name[i] << "\t" << res_qty[i] << "\t" << res_type[i] << endl;
}

void addResource()
{
    system("cls");
    if (res_count >= MAX)
    {
        cout << " List is full!" << endl;
        return;
    }
    cout << " Name : ";
    cin.ignore();
    getline(cin, res_name[res_count]);
    cout << " Type (Food/Water/Medical/Shelter) : ";
    getline(cin, res_type[res_count]);
    cout << " Qty  : ";
    cin >> res_qty[res_count];
    res_count++;
    saveResources();
    cout << " Resource added!" << endl;
}

void updateResource()
{
    system("cls");
    for (int i = 0; i < res_count; i++)
        if (res_name[i] != "")
            cout << " " << i + 1 << ". " << res_name[i] << "  (Qty:" << res_qty[i] << " | " << res_type[i] << ")" << endl;
    cout << " Select # : ";
    int idx;
    cin >> idx;
    idx--;
    if (idx < 0 || idx >= res_count)
    {
        cout << " Invalid." << endl;
        return;
    }
    cout << " New Name : ";
    cin.ignore();
    getline(cin, res_name[idx]);
    cout << " New Type : ";
    getline(cin, res_type[idx]);
    cout << " New Qty  : ";
    cin >> res_qty[idx];
    saveResources();
    cout << " Updated!" << endl;
}

void deleteResource()
{
    system("cls");
    for (int i = 0; i < res_count; i++)
        if (res_name[i] != "")
            cout << " " << i + 1 << ". " << res_name[i] << "  (Qty:" << res_qty[i] << ")" << endl;
    cout << " Select # to delete : ";
    int idx;
    cin >> idx;
    idx--;
    if (idx < 0 || idx >= res_count)
    {
        cout << " Invalid." << endl;
        return;
    }
    cout << " Confirm delete '" << res_name[idx] << "' ? (y/n) : ";
    char c;
    cin >> c;
    if (c == 'y' || c == 'Y')
    {
        for (int i = idx; i < res_count - 1; i++)
        {
            res_name[i] = res_name[i + 1];
            res_qty[i]  = res_qty[i + 1];
            res_type[i] = res_type[i + 1];
        }
        res_count--;
        saveResources();
        cout << " Deleted." << endl;
    }
}

void manageResources()
{
    while (true)
    {
        system("cls");
        cout << "---------- MANAGE RESOURCES ----------" << endl;
        cout << " 1. View All" << endl;
        cout << " 2. Add" << endl;
        cout << " 3. Update" << endl;
        cout << " 4. Delete" << endl;
        cout << " 5. Back" << endl;
        cout << " Choose : ";
        string ro;
        cin >> ro;

        if (ro == "1")
            viewResources();
        else if (ro == "2")
            addResource();
        else if (ro == "3")
            updateResource();
        else if (ro == "4")
            deleteResource();
        else if (ro == "5")
            break;
        else
            cout << " Invalid option." << endl;

        cout << " Press any key..." << endl;
        getch();
    }
}

void searchResource()
{
    system("cls");
    cout << " Enter resource name : ";
    string nm;
    cin.ignore();
    getline(cin, nm);
    bool found = false;
    for (int i = 0; i < res_count; i++)
        if (res_name[i] == nm)
        {
            cout << " Name : " << res_name[i] << endl;
            cout << " Type : " << res_type[i] << endl;
            cout << " Qty  : " << res_qty[i] << endl;
            if (res_qty[i] == 0)
                cout << " [ALERT] Out of stock!" << endl;
            found = true;
        }
    if (!found)
        cout << " Resource not found." << endl;
}


// ═══════════════════════════════════════════════════════════════════════════
//  ZONE FUNCTIONS
// ═══════════════════════════════════════════════════════════════════════════

void viewZones()
{
    system("cls");
    cout << " #   Zone            Population   Severity" << endl;
    cout << "------------------------------------------" << endl;
    for (int i = 0; i < zone_count; i++)
        cout << " " << i + 1 << ".  " << zone_name[i] << "\t" << zone_pop[i] << "\t" << zone_sev[i] << endl;
}

void addZone()
{
    system("cls");
    if (zone_count >= MAX)
    {
        cout << " Zone list is full!" << endl;
        return;
    }
    cout << " Zone Name                             : ";
    cin.ignore();
    getline(cin, zone_name[zone_count]);
    cout << " Population                            : ";
    cin >> zone_pop[zone_count];
    cout << " Severity (Critical/High/Moderate/Low) : ";
    cin.ignore();
    getline(cin, zone_sev[zone_count]);
    zone_count++;
    saveZones();
    cout << " Zone added!" << endl;
}

void addZoneByOfficer()
{
    system("cls");
    if (zone_count >= MAX)
    {
        cout << " Zone list is full!" << endl;
        return;
    }
    cout << " Zone Name                             : ";
    cin.ignore();
    getline(cin, zone_name[zone_count]);
    cout << " Population                            : ";
    cin >> zone_pop[zone_count];
    cout << " Severity (Critical/High/Moderate/Low) : ";
    cin.ignore();
    getline(cin, zone_sev[zone_count]);
    zone_count++;
    saveZones();
    cout << " Zone reported!" << endl;
}

void updateZoneSeverity()
{
    system("cls");
    for (int i = 0; i < zone_count; i++)
        cout << " " << i + 1 << ". " << zone_name[i] << "  [" << zone_sev[i] << "]" << endl;
    cout << " Select # : ";
    int idx;
    cin >> idx;
    idx--;
    if (idx < 0 || idx >= zone_count)
    {
        cout << " Invalid." << endl;
        return;
    }
    cout << " New Severity (Critical/High/Moderate/Low) : ";
    cin.ignore();
    getline(cin, zone_sev[idx]);
    saveZones();
    cout << " Severity updated." << endl;
}


// ═══════════════════════════════════════════════════════════════════════════
//  AID REQUEST FUNCTIONS
// ═══════════════════════════════════════════════════════════════════════════

void viewAidRequests()
{
    system("cls");
    cout << " #   Zone           Item                Qty    Status" << endl;
    cout << "------------------------------------------------------" << endl;
    for (int i = 0; i < req_count; i++)
        if (req_zone[i] != "")
            cout << " " << i + 1 << ".  " << req_zone[i] << "\t" << req_item[i]
                 << "\t" << req_qty[i] << "\t" << req_status[i] << endl;
}

void approveRejectRequest()
{
    system("cls");
    cout << "---------- PENDING REQUESTS ----------" << endl;
    int shown = 0;
    for (int i = 0; i < req_count; i++)
        if (req_status[i] == "Pending")
        {
            cout << " " << i + 1 << ". " << req_zone[i] << " - " << req_item[i] << " x" << req_qty[i] << endl;
            shown++;
        }
    if (shown == 0)
    {
        cout << " No pending requests." << endl;
        return;
    }
    cout << " Select # : ";
    int idx;
    cin >> idx;
    idx--;
    if (idx < 0 || idx >= req_count)
    {
        cout << " Invalid." << endl;
        return;
    }
    cout << " 1=Approve  2=Reject : ";
    int act;
    cin >> act;
    if (act == 1)
    {
        req_status[idx] = "Approved";
        for (int r = 0; r < res_count; r++)
            if (res_name[r] == req_item[idx])
            {
                if (res_qty[r] >= req_qty[idx])
                    res_qty[r] -= req_qty[idx];
                else
                    cout << " [WARN] Insufficient stock!" << endl;
            }
        saveRequests();
        saveResources();
        cout << " Approved. Stock deducted." << endl;
    }
    else if (act == 2)
    {
        req_status[idx] = "Rejected";
        saveRequests();
        cout << " Rejected." << endl;
    }
    else
    {
        cout << " Invalid." << endl;
    }
}

void dispatchApprovedAid()
{
    system("cls");
    cout << "---------- APPROVED REQUESTS ----------" << endl;
    int shown = 0;
    for (int i = 0; i < req_count; i++)
        if (req_status[i] == "Approved")
        {
            cout << " " << i + 1 << ". " << req_zone[i] << " - " << req_item[i] << " x" << req_qty[i] << endl;
            shown++;
        }
    if (shown == 0)
    {
        cout << " No approved requests to dispatch." << endl;
        return;
    }
    cout << " Select # to dispatch : ";
    int idx;
    cin >> idx;
    idx--;
    if (idx < 0 || idx >= req_count)
    {
        cout << " Invalid." << endl;
    }
    else if (req_status[idx] != "Approved")
    {
        cout << " Not an approved request." << endl;
    }
    else
    {
        req_status[idx] = "Dispatched";
        saveRequests();
        cout << " Aid dispatched to " << req_zone[idx] << "!" << endl;
    }
}

void submitAidRequest()
{
    system("cls");
    if (req_count >= MAX)
    {
        cout << " Request list is full!" << endl;
        return;
    }
    cout << " Zone Name : ";
    cin.ignore();
    getline(cin, req_zone[req_count]);
    cout << " Item      : ";
    getline(cin, req_item[req_count]);
    cout << " Quantity  : ";
    cin >> req_qty[req_count];
    req_status[req_count] = "Pending";
    req_count++;
    saveRequests();
    cout << " Request submitted. Status: Pending." << endl;
}

void deleteMyRequest()
{
    system("cls");
    int shown = 0;
    for (int i = 0; i < req_count; i++)
        if (req_zone[i] != "" && req_status[i] == "Pending")
        {
            cout << " " << i + 1 << ". " << req_zone[i] << " - " << req_item[i] << " x" << req_qty[i] << endl;
            shown++;
        }
    if (shown == 0)
    {
        cout << " No pending requests to delete." << endl;
        return;
    }
    cout << " Select # to delete : ";
    int idx;
    cin >> idx;
    idx--;
    if (idx < 0 || idx >= req_count)
    {
        cout << " Invalid." << endl;
        return;
    }
    cout << " Confirm delete ? (y/n) : ";
    char c;
    cin >> c;
    if (c == 'y' || c == 'Y')
    {
        for (int i = idx; i < req_count - 1; i++)
        {
            req_zone[i]   = req_zone[i + 1];
            req_item[i]   = req_item[i + 1];
            req_qty[i]    = req_qty[i + 1];
            req_status[i] = req_status[i + 1];
        }
        req_count--;
        saveRequests();
        cout << " Deleted." << endl;
    }
}


// ═══════════════════════════════════════════════════════════════════════════
//  VOLUNTEER FUNCTIONS
// ═══════════════════════════════════════════════════════════════════════════

void viewVolunteers()
{
    system("cls");
    cout << " #   Name              Skill       Status" << endl;
    cout << "------------------------------------------" << endl;
    for (int i = 0; i < vol_count; i++)
        cout << " " << i + 1 << ".  " << vol_name[i] << "\t" << vol_skill[i] << "\t" << vol_status[i] << endl;
}

void requestVolunteer()
{
    system("cls");
    cout << " Skill needed (Medical/Rescue/Logistics) : ";
    string skill;
    cin.ignore();
    getline(cin, skill);
    bool found = false;
    for (int i = 0; i < vol_count; i++)
        if (vol_skill[i] == skill && vol_status[i] == "Available")
        {
            vol_status[i] = "Active";
            saveVolunteers();
            cout << " Assigned: " << vol_name[i] << " (now Active)" << endl;
            found = true;
            break;
        }
    if (!found)
        cout << " No available volunteer with skill: " << skill << endl;
}


// ═══════════════════════════════════════════════════════════════════════════
//  REPORT FUNCTION
// ═══════════════════════════════════════════════════════════════════════════

void summaryReport()
{
    system("cls");
    cout << "========== SUMMARY REPORT ==========" << endl;
    int total_units = 0, pending = 0, approved = 0, dispatched = 0, critical = 0, total_pop = 0;
    for (int i = 0; i < res_count; i++)
        total_units += res_qty[i];
    for (int i = 0; i < req_count; i++)
    {
        if (req_status[i] == "Pending")    pending++;
        if (req_status[i] == "Approved")   approved++;
        if (req_status[i] == "Dispatched") dispatched++;
    }
    for (int i = 0; i < zone_count; i++)
    {
        if (zone_sev[i] == "Critical") critical++;
        total_pop += zone_pop[i];
    }
    cout << " Resources in stock    : " << res_count << " types" << endl;
    cout << " Total resource units  : " << total_units << endl;
    cout << " Zones affected        : " << zone_count << "  (Critical: " << critical << ")" << endl;
    cout << " Population at risk    : " << total_pop << endl;
    cout << " Pending requests      : " << pending << endl;
    cout << " Approved requests     : " << approved << endl;
    cout << " Dispatched            : " << dispatched << endl;
    cout << " Volunteers registered : " << vol_count << endl;
    cout << "=====================================" << endl;
}


// ═══════════════════════════════════════════════════════════════════════════
//  LOGIN FUNCTIONS
// ═══════════════════════════════════════════════════════════════════════════

bool adminLogin()
{
    for (int attempt = 0; attempt < 3; attempt++)
    {
        system("cls");
        cout << " Admin Login  [Attempt " << attempt + 1 << " of 3]" << endl;
        cout << " Username : ";
        string u;
        cin >> u;
        cout << " Password : ";
        string p;
        cin >> p;
        if (u == "admin" && p == "123")
        {
            cout << " Login successful!" << endl;
            getch();
            return true;
        }
        else
        {
            cout << " Invalid credentials." << endl;
            getch();
        }
    }
    return false;
}

bool officerLogin()
{
    for (int attempt = 0; attempt < 3; attempt++)
    {
        system("cls");
        cout << " Field Officer Login  [Attempt " << attempt + 1 << " of 3]" << endl;
        cout << " Username : ";
        string u;
        cin >> u;
        cout << " Password : ";
        string p;
        cin >> p;
        if (u == "officer" && p == "123")
        {
            cout << " Login successful!" << endl;
            getch();
            return true;
        }
        else
        {
            cout << " Invalid credentials." << endl;
            getch();
        }
    }
    return false;
}


// ═══════════════════════════════════════════════════════════════════════════
//  PANEL FUNCTIONS
// ═══════════════════════════════════════════════════════════════════════════

void adminPanel()
{
    bool logged_in = true;
    while (logged_in)
    {
        system("cls");
        cout << "------------------------------------------------------" << endl;
        cout << "                    ADMIN PANEL                       " << endl;
        cout << "------------------------------------------------------" << endl;
        cout << "  1. Manage Resources (CRUD)" << endl;
        cout << "  2. View Zones" << endl;
        cout << "  3. Add Zone" << endl;
        cout << "  4. Update Zone Severity" << endl;
        cout << "  5. View Aid Requests" << endl;
        cout << "  6. Approve / Reject Request" << endl;
        cout << "  7. Dispatch Approved Aid" << endl;
        cout << "  8. View Volunteers" << endl;
        cout << "  9. Summary Report" << endl;
        cout << " 10. Logout" << endl;
        cout << "------------------------------------------------------" << endl;
        cout << " Choose : ";
        string opt;
        cin >> opt;

        if (opt == "1")
            manageResources();
        else if (opt == "2")
        {
            viewZones();
            cout << " Press any key..." << endl;
            getch();
        }
        else if (opt == "3")
        {
            addZone();
            cout << " Press any key..." << endl;
            getch();
        }
        else if (opt == "4")
        {
            updateZoneSeverity();
            cout << " Press any key..." << endl;
            getch();
        }
        else if (opt == "5")
        {
            viewAidRequests();
            cout << " Press any key..." << endl;
            getch();
        }
        else if (opt == "6")
        {
            approveRejectRequest();
            cout << " Press any key..." << endl;
            getch();
        }
        else if (opt == "7")
        {
            dispatchApprovedAid();
            cout << " Press any key..." << endl;
            getch();
        }
        else if (opt == "8")
        {
            viewVolunteers();
            cout << " Press any key..." << endl;
            getch();
        }
        else if (opt == "9")
        {
            summaryReport();
            cout << " Press any key..." << endl;
            getch();
        }
        else if (opt == "10")
        {
            cout << " Logging out..." << endl;
            getch();
            logged_in = false;
        }
        else
        {
            cout << " Invalid option." << endl;
            getch();
        }
    }
}

void officerPanel()
{
    bool logged_in = true;
    while (logged_in)
    {
        system("cls");
        cout << "------------------------------------------------------" << endl;
        cout << "               FIELD OFFICER PANEL                    " << endl;
        cout << "------------------------------------------------------" << endl;
        cout << "  1. View Resources" << endl;
        cout << "  2. Search Resource by Name" << endl;
        cout << "  3. View Zones" << endl;
        cout << "  4. Add Zone" << endl;
        cout << "  5. View Aid Requests" << endl;
        cout << "  6. Submit Aid Request" << endl;
        cout << "  7. Delete My Request" << endl;
        cout << "  8. View Volunteers" << endl;
        cout << "  9. Request Volunteer" << endl;
        cout << " 10. Logout" << endl;
        cout << "------------------------------------------------------" << endl;
        cout << " Choose : ";
        string opt;
        cin >> opt;

        if (opt == "1")
        {
            viewResources();
            cout << " Press any key..." << endl;
            getch();
        }
        else if (opt == "2")
        {
            searchResource();
            cout << " Press any key..." << endl;
            getch();
        }
        else if (opt == "3")
        {
            viewZones();
            cout << " Press any key..." << endl;
            getch();
        }
        else if (opt == "4")
        {
            addZoneByOfficer();
            cout << " Press any key..." << endl;
            getch();
        }
        else if (opt == "5")
        {
            viewAidRequests();
            cout << " Press any key..." << endl;
            getch();
        }
        else if (opt == "6")
        {
            submitAidRequest();
            cout << " Press any key..." << endl;
            getch();
        }
        else if (opt == "7")
        {
            deleteMyRequest();
            cout << " Press any key..." << endl;
            getch();
        }
        else if (opt == "8")
        {
            viewVolunteers();
            cout << " Press any key..." << endl;
            getch();
        }
        else if (opt == "9")
        {
            requestVolunteer();
            cout << " Press any key..." << endl;
            getch();
        }
        else if (opt == "10")
        {
            cout << " Logging out..." << endl;
            getch();
            logged_in = false;
        }
        else
        {
            cout << " Invalid option." << endl;
            getch();
        }
    }
}


// ═══════════════════════════════════════════════════════════════════════════
//  MAIN
// ═══════════════════════════════════════════════════════════════════════════

int main()
{
    // Load all data from files when program starts
    loadAllData();

    while (true)
    {
        system("cls");
        cout << "------------------------------------------------------" << endl;
        cout << "------  DISASTER RELIEF SYSTEM  -  PUNJAB, PK  ------" << endl;
        cout << "------------------------------------------------------" << endl;
        cout << " 1. Login as Admin" << endl;
        cout << " 2. Login as Field Officer" << endl;
        cout << " 3. Exit" << endl;
        cout << " Choose option : ";
        string choice;
        cin >> choice;

        if (choice == "1")
        {
            bool ok = adminLogin();
            if (ok)
                adminPanel();
        }
        else if (choice == "2")
        {
            bool ok = officerLogin();
            if (ok)
                officerPanel();
        }
        else if (choice == "3")
        {
            cout << endl << " Goodbye. Stay Safe." << endl;
            break;
        }
        else
        {
            cout << " Invalid option." << endl;
            getch();
        }
    }

    return 0;
}
