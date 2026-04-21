#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    const int MAX = 50;

    // ── RESOURCES ──────────────────────────────────────────
    string res_name[MAX] = {"Wheat Flour (50kg)", "Drinking Water (L)", "First Aid Kits",
                            "Relief Tents", "Blankets", "ORS / Medicine"};
    int res_qty[MAX] = {1800, 45000, 420, 310, 900, 650};
    string res_type[MAX] = {"Food", "Water", "Medical", "Shelter", "Shelter", "Medical"};
    int res_count = 6;

    // ── ZONES ──────────────────────────────────────────────
    string zone_name[MAX] = {"Rajanpur", "Muzaffargarh", "D.G. Khan", "Layyah", "Bhakkar"};
    int zone_pop[MAX] = {92000, 80000, 51000, 40000, 21000};
    string zone_sev[MAX] = {"Critical", "Critical", "High", "High", "Moderate"};
    int zone_count = 5;

    // ── AID REQUESTS ───────────────────────────────────────
    string req_zone[MAX] = {"Rajanpur", "Muzaffargarh", "D.G. Khan", "Layyah", "Bhakkar"};
    string req_item[MAX] = {"Wheat Flour (50kg)", "Drinking Water (L)",
                            "Relief Tents", "ORS / Medicine", "Blankets"};
    int req_qty[MAX] = {500, 12000, 80, 150, 200};
    string req_status[MAX] = {"Pending", "Pending", "Approved", "Pending", "Approved"};
    int req_count = 5;

    // ── VOLUNTEERS ─────────────────────────────────────────
    string vol_name[MAX] = {"daniya ", "fatima", " zanish",
                            "Sadia ", "ayesha"};
    string vol_skill[MAX] = {"Medical", "Medical", "Rescue", "Logistics", "Rescue"};
    string vol_status[MAX] = {"Active", "Active", "Active", "Available", "Available"};
    int vol_count = 5;

    // ══════════════════════════════════════════════════════
    //  MAIN LOOP
    // ══════════════════════════════════════════════════════
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

        // ══════════════════════════════════════
        //  ADMIN LOGIN
        // ══════════════════════════════════════
        if (choice == "1")
        {
            bool logged_in = false;
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
                    logged_in = true;
                    cout << " Login successful!" << endl;
                    getch();
                    break;
                }
                else
                {
                    cout << " Invalid credentials." << endl;
                    getch();
                }
            }

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

                // ── 1. RESOURCES CRUD ──────────────
                if (opt == "1")
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
                        {
                            system("cls");
                            cout << " #   Name                  Qty      Type" << endl;
                            cout << "-------------------------------------------" << endl;
                            for (int i = 0; i < res_count; i++)
                                if (res_name[i] != "")
                                    cout << " " << i + 1 << ".  " << res_name[i] << "\t" << res_qty[i] << "\t" << res_type[i] << endl;
                        }
                        else if (ro == "2")
                        {
                            system("cls");
                            if (res_count >= MAX)
                            {
                                cout << " List is full!" << endl;
                            }
                            else
                            {
                                cout << " Name : ";
                                cin.ignore();
                                getline(cin, res_name[res_count]);
                                cout << " Type (Food/Water/Medical/Shelter) : ";
                                getline(cin, res_type[res_count]);
                                cout << " Qty  : ";
                                cin >> res_qty[res_count];
                                res_count++;
                                cout << " Resource added!" << endl;
                            }
                        }
                        else if (ro == "3")
                        {
                            system("cls");
                            for (int i = 0; i < res_count; i++)
                                if (res_name[i] != "")
                                    cout << " " << i + 1 << ". " << res_name[i]
                                         << "  (Qty:" << res_qty[i] << " | " << res_type[i] << ")" << endl;
                            cout << " Select # : ";
                            int idx;
                            cin >> idx;
                            idx--;
                            if (idx < 0 || idx >= res_count)
                            {
                                cout << " Invalid." << endl;
                            }
                            else
                            {
                                cout << " New Name : ";
                                cin.ignore();
                                getline(cin, res_name[idx]);
                                cout << " New Type : ";
                                getline(cin, res_type[idx]);
                                cout << " New Qty  : ";
                                cin >> res_qty[idx];
                                cout << " Updated!" << endl;
                            }
                        }
                        else if (ro == "4")
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
                            }
                            else
                            {
                                cout << " Confirm delete '" << res_name[idx] << "' ? (y/n) : ";
                                char c;
                                cin >> c;
                                if (c == 'y' || c == 'Y')
                                {
                                    for (int i = idx; i < res_count - 1; i++)
                                    {
                                        res_name[i] = res_name[i + 1];
                                        res_qty[i] = res_qty[i + 1];
                                        res_type[i] = res_type[i + 1];
                                    }
                                    res_count--;
                                    cout << " Deleted." << endl;
                                }
                            }
                        }
                        else if (ro == "5")
                        {
                            break;
                        }
                        else
                        {
                            cout << " Invalid option." << endl;
                        }
                        cout << " Press any key..." << endl;
                        getch();
                    }
                }

                // ── 2. VIEW ZONES ──────────────────
                else if (opt == "2")
                {
                    system("cls");
                    cout << " #   Zone            Population   Severity" << endl;
                    cout << "------------------------------------------" << endl;
                    for (int i = 0; i < zone_count; i++)
                        cout << " " << i + 1 << ".  " << zone_name[i]
                             << "\t" << zone_pop[i]
                             << "\t" << zone_sev[i] << endl;
                    cout << " Press any key..." << endl;
                    getch();
                }

                // ── 3. ADD ZONE ────────────────────
                else if (opt == "3")
                {
                    system("cls");
                    if (zone_count >= MAX)
                    {
                        cout << " Zone list is full!" << endl;
                    }
                    else
                    {
                        cout << " Zone Name                             : ";
                        cin.ignore();
                        getline(cin, zone_name[zone_count]);
                        cout << " Population                            : ";
                        cin >> zone_pop[zone_count];
                        cout << " Severity (Critical/High/Moderate/Low) : ";
                        cin.ignore();
                        getline(cin, zone_sev[zone_count]);
                        zone_count++;
                        cout << " Zone added!" << endl;
                    }
                    cout << " Press any key..." << endl;
                    getch();
                }

                // ── 4. UPDATE ZONE SEVERITY ────────
                else if (opt == "4")
                {
                    system("cls");
                    for (int i = 0; i < zone_count; i++)
                        cout << " " << i + 1 << ". " << zone_name[i]
                             << "  [" << zone_sev[i] << "]" << endl;
                    cout << " Select # : ";
                    int idx;
                    cin >> idx;
                    idx--;
                    if (idx < 0 || idx >= zone_count)
                    {
                        cout << " Invalid." << endl;
                    }
                    else
                    {
                        cout << " New Severity (Critical/High/Moderate/Low) : ";
                        cin.ignore();
                        getline(cin, zone_sev[idx]);
                        cout << " Severity updated." << endl;
                    }
                    cout << " Press any key..." << endl;
                    getch();
                }

                // ── 5. VIEW AID REQUESTS ───────────
                else if (opt == "5")
                {
                    system("cls");
                    cout << " #   Zone           Item                Qty    Status" << endl;
                    cout << "------------------------------------------------------" << endl;
                    for (int i = 0; i < req_count; i++)
                        if (req_zone[i] != "")
                            cout << " " << i + 1 << ".  " << req_zone[i]
                                 << "\t" << req_item[i]
                                 << "\t" << req_qty[i]
                                 << "\t" << req_status[i] << endl;
                    cout << " Press any key..." << endl;
                    getch();
                }

                // ── 6. APPROVE / REJECT ────────────
                else if (opt == "6")
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
                    }
                    else
                    {
                        cout << " Select # : ";
                        int idx;
                        cin >> idx;
                        idx--;
                        if (idx < 0 || idx >= req_count)
                        {
                            cout << " Invalid." << endl;
                        }
                        else
                        {
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
                                cout << " Approved. Stock deducted." << endl;
                            }
                            else if (act == 2)
                            {
                                req_status[idx] = "Rejected";
                                cout << " Rejected." << endl;
                            }
                            else
                            {
                                cout << " Invalid." << endl;
                            }
                        }
                    }
                    cout << " Press any key..." << endl;
                    getch();
                }

                // ── 7. DISPATCH APPROVED AID ───────
                else if (opt == "7")
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
                    }
                    else
                    {
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
                            cout << " Aid dispatched to " << req_zone[idx] << "!" << endl;
                        }
                    }
                    cout << " Press any key..." << endl;
                    getch();
                }

                // ── 8. VIEW VOLUNTEERS ─────────────
                else if (opt == "8")
                {
                    system("cls");
                    cout << " #   Name              Skill       Status" << endl;
                    cout << "------------------------------------------" << endl;
                    for (int i = 0; i < vol_count; i++)
                        cout << " " << i + 1 << ".  " << vol_name[i]
                             << "\t" << vol_skill[i]
                             << "\t" << vol_status[i] << endl;
                    cout << " Press any key..." << endl;
                    getch();
                }

                // ── 9. SUMMARY REPORT ──────────────
                else if (opt == "9")
                {
                    system("cls");
                    cout << "========== SUMMARY REPORT ==========" << endl;
                    int total_units = 0, pending = 0, approved = 0, dispatched = 0, critical = 0, total_pop = 0;
                    for (int i = 0; i < res_count; i++)
                        total_units += res_qty[i];
                    for (int i = 0; i < req_count; i++)
                    {
                        if (req_status[i] == "Pending")
                            pending++;
                        if (req_status[i] == "Approved")
                            approved++;
                        if (req_status[i] == "Dispatched")
                            dispatched++;
                    }
                    for (int i = 0; i < zone_count; i++)
                    {
                        if (zone_sev[i] == "Critical")
                            critical++;
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
                    cout << " Press any key..." << endl;
                    getch();
                }

                // ── 10. LOGOUT ─────────────────────
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

        // ══════════════════════════════════════
        //  FIELD OFFICER LOGIN
        // ══════════════════════════════════════
        else if (choice == "2")
        {
            bool logged_in = false;
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
                    logged_in = true;
                    cout << " Login successful!" << endl;
                    getch();
                    break;
                }
                else
                {
                    cout << " Invalid credentials." << endl;
                    getch();
                }
            }

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

                // ── 1. VIEW RESOURCES ──────────────
                if (opt == "1")
                {
                    system("cls");
                    cout << " #   Name                  Qty      Type" << endl;
                    cout << "-------------------------------------------" << endl;
                    for (int i = 0; i < res_count; i++)
                        if (res_name[i] != "")
                            cout << " " << i + 1 << ".  " << res_name[i]
                                 << "\t" << res_qty[i]
                                 << "\t" << res_type[i] << endl;
                }

                // ── 2. SEARCH RESOURCE ─────────────
                else if (opt == "2")
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

                // ── 3. VIEW ZONES ──────────────────
                else if (opt == "3")
                {
                    system("cls");
                    cout << " #   Zone            Population   Severity" << endl;
                    cout << "------------------------------------------" << endl;
                    for (int i = 0; i < zone_count; i++)
                        cout << " " << i + 1 << ".  " << zone_name[i]
                             << "\t" << zone_pop[i]
                             << "\t" << zone_sev[i] << endl;
                }

                // ── 4. ADD ZONE ────────────────────
                else if (opt == "4")
                {
                    system("cls");
                    if (zone_count >= MAX)
                    {
                        cout << " Zone list is full!" << endl;
                    }
                    else
                    {
                        cout << " Zone Name                             : ";
                        cin.ignore();
                        getline(cin, zone_name[zone_count]);
                        cout << " Population                            : ";
                        cin >> zone_pop[zone_count];
                        cout << " Severity (Critical/High/Moderate/Low) : ";
                        cin.ignore();
                        getline(cin, zone_sev[zone_count]);
                        zone_count++;
                        cout << " Zone reported!" << endl;
                    }
                }

                // ── 5. VIEW AID REQUESTS ───────────
                else if (opt == "5")
                {
                    system("cls");
                    cout << " #   Zone           Item                Qty    Status" << endl;
                    cout << "------------------------------------------------------" << endl;
                    for (int i = 0; i < req_count; i++)
                        if (req_zone[i] != "")
                            cout << " " << i + 1 << ".  " << req_zone[i]
                                 << "\t" << req_item[i]
                                 << "\t" << req_qty[i]
                                 << "\t" << req_status[i] << endl;
                }

                // ── 6. SUBMIT AID REQUEST ──────────
                else if (opt == "6")
                {
                    system("cls");
                    if (req_count >= MAX)
                    {
                        cout << " Request list is full!" << endl;
                    }
                    else
                    {
                        cout << " Zone Name : ";
                        cin.ignore();
                        getline(cin, req_zone[req_count]);
                        cout << " Item      : ";
                        getline(cin, req_item[req_count]);
                        cout << " Quantity  : ";
                        cin >> req_qty[req_count];
                        req_status[req_count] = "Pending";
                        req_count++;
                        cout << " Request submitted. Status: Pending." << endl;
                    }
                }

                // ── 7. DELETE MY REQUEST ───────────
                else if (opt == "7")
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
                    }
                    else
                    {
                        cout << " Select # to delete : ";
                        int idx;
                        cin >> idx;
                        idx--;
                        if (idx < 0 || idx >= req_count)
                        {
                            cout << " Invalid." << endl;
                        }
                        else
                        {
                            cout << " Confirm delete ? (y/n) : ";
                            char c;
                            cin >> c;
                            if (c == 'y' || c == 'Y')
                            {
                                for (int i = idx; i < req_count - 1; i++)
                                {
                                    req_zone[i] = req_zone[i + 1];
                                    req_item[i] = req_item[i + 1];
                                    req_qty[i] = req_qty[i + 1];
                                    req_status[i] = req_status[i + 1];
                                }
                                req_count--;
                                cout << " Deleted." << endl;
                            }
                        }
                    }
                }

                // ── 8. VIEW VOLUNTEERS ─────────────
                else if (opt == "8")
                {
                    system("cls");
                    cout << " #   Name              Skill       Status" << endl;
                    cout << "------------------------------------------" << endl;
                    for (int i = 0; i < vol_count; i++)
                        cout << " " << i + 1 << ".  " << vol_name[i]
                             << "\t" << vol_skill[i]
                             << "\t" << vol_status[i] << endl;
                }

                // ── 9. REQUEST VOLUNTEER ───────────
                else if (opt == "9")
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
                            cout << " Assigned: " << vol_name[i] << " (now Active)" << endl;
                            found = true;
                            break;
                        }
                    if (!found)
                        cout << " No available volunteer with skill: " << skill << endl;
                }

                // ── 10. LOGOUT ─────────────────────
                else if (opt == "10")
                {
                    cout << " Logging out..." << endl;
                    getch();
                    logged_in = false;
                }
                else
                {
                    cout << " Invalid option." << endl;
                }

                if (logged_in)
                {
                    cout << " Press any key..." << endl;
                    getch();
                }
            }
        }

        // ══════════════════════════════════════
        //  EXIT
        // ══════════════════════════════════════
        else if (choice == "3")
        {
            cout << endl
                 << " Goodbye. Stay Safe." << endl;
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
