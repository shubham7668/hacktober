from ast import main
from email.mime import image
from logging import root
from tkinter import *
from tkinter import messagebox

from PIL import Image, ImageTk
from tkinter import ttk


class PharamacyManagementSystem:
    def __init__(self, root):
        self.root = root
        self.root.title("PharmEasy")
        self.root.geometry("1550x800+0+0")


        # ************addmedvariables*************
        self.addmed_var = StringVar()
        self.refMed_var = StringVar()

        label_title = Label(self.root, text="MediLife : The joy of Medicine", border=13, relief=RIDGE,
                            bg='skyblue', fg='navyblue', font=('Lucida Bright', 45, "bold"), padx=3, pady=3)

        label_title.pack(side=TOP, fill=X)

        img1 = Image.open("C:\src\projects\Amogh\pharmacy\pic1logo.png")
        img1 = img1.resize((150, 60), Image.Resampling.LANCZOS)
        self.photoimage1 = ImageTk.PhotoImage(img1)
        button1 = Button(self.root, image=self.photoimage1, borderwidth=4)
        button1.place(x=70, y=15)
        # **************DATAFRAMES******************

        DataFrame = Frame(self.root, bd=15, relief=RIDGE, padx=20)
        DataFrame.place(x=0, y=120, width=1530, height=400)

        DetailsFrame = Frame(self.root, bd=15, relief=RIDGE)
        DetailsFrame.place(x=0, y=580, width=1530, height=200)

        DataFrameLeft = LabelFrame(DataFrame, bd=10, relief=RIDGE, padx=20, text
        ="Medicine Properties", fg="navyblue"
                                   , font=('Lucida Bright', 13, "bold"))
        DataFrameLeft.place(x=0, y=5, width=900, height=350)

        DataFrameRight = LabelFrame(DataFrame, bd=10, relief=RIDGE, padx=20, text
        ="Add Medicinal Department", fg="Navyblue"
                                    , font=('Lucida Bright', 13, "bold"))
        DataFrameRight.place(x=910, y=5, width=550, height=350)

        # **********************BUTTONS FRAME****************************
        ButtonFrame = Frame(self.root, bd=15, relief=RIDGE, padx=20)
        ButtonFrame.place(x=0, y=520, width=1530, height=65)

        # ************************MAIN BUTTONS*******************

        btnadddata = Button(ButtonFrame, text="Add Medicine", font=
        ("arial", 12, "bold"), bg="skyblue", fg="navyblue")
        btnadddata.grid(row=0, column=0)

        btnupdatemed = Button(ButtonFrame, text="UPDATE", font=
        ("arial", 12, "bold"), width=14, bg="skyblue", fg="navyblue")
        btnupdatemed.grid(row=0, column=1)

        btnDeletemed = Button(ButtonFrame, text="DELETE", font=
        ("arial", 12, "bold"), width=14, bg="skyblue", fg="navyblue")
        btnDeletemed.grid(row=0, column=2)

        btnResetmed = Button(ButtonFrame, text="RESET", font=
        ("arial", 12, "bold"), width=14, bg="skyblue", fg="navyblue")
        btnResetmed.grid(row=0, column=3)

        btnExitmed = Button(ButtonFrame, text="EXIT", font=
        ("arial", 12, "bold"), width=14, bg="skyblue", fg="navyblue")
        btnExitmed.grid(row=0, column=4)
        # *********************SEARCH ::******************

        labelsearch = Label(ButtonFrame, font=("lucida bright", 14, "bold")
                            , text="Search", padx=2, width=10, bg="skyblue", fg="Navy blue")
        labelsearch.grid(row=0, column=5, sticky=W)

        search_combo = ttk.Combobox(ButtonFrame, width=14, font=("lucida bright", 13, "bold")
                                    , state="readonly")
        search_combo["values"] = ("Reference", "MedName", "Lot")
        search_combo.grid(row=0, column=6)
        search_combo.current(0)

        txtsearch = Entry(ButtonFrame, bd=3, relief=RIDGE,
                          width=12, font=("lucida bright", 14, "bold"))
        txtsearch.grid(row=0, column=7)

        searchbutton = Button(ButtonFrame, text="SEARCH", font=
        ("arial", 12, "bold"), width=13, bg="skyblue", fg="navyblue")
        searchbutton.grid(row=0, column=8)

        showall = Button(ButtonFrame, text="SHOW ALL", font=
        ("arial", 12, "bold"), width=14, bg="skyblue", fg="navyblue")
        showall.grid(row=0, column=9)

        # **********************LABELS AND ENTRIES*******************
        labelrefno = Label(DataFrameLeft, font=("lucida bright", 12, "bold")
                           , anchor="w", text="Reference No.", padx=2)
        labelrefno.grid(row=0, column=0, sticky=W)

        ref_combo = ttk.Combobox(DataFrameLeft, width=27, font=("lucida bright", 12, "bold")
                                 , state="readonly")
        ref_combo["values"] = ("Reference", "MedName", "Lot")
        ref_combo.grid(row=0, column=1)
        ref_combo.current(0)

        labelcompname = Label(DataFrameLeft, font=("lucida bright", 12, "bold")
                              , anchor="w", text="Company Name:", padx=2, pady=6)
        labelcompname.grid(row=1, column=0, sticky=W)
        labelcompentry = Entry(DataFrameLeft, relief=RIDGE,
                               width=29, font=("lucida bright", 12, "bold"))
        labelcompentry.grid(row=1, column=1, sticky=W, pady=10)

        typeofmed = Label(DataFrameLeft, font=("lucida bright", 12, "bold")
                          , anchor="w", text="Type of Medicine:", padx=2, pady=6)
        typeofmed.grid(row=2, column=0, sticky=W)

        searchtypemed = ttk.Combobox(DataFrameLeft, width=27, font=("lucida bright", 12, "bold")
                                     , state="readonly")
        searchtypemed["values"] = ("Tablet", "Injections", "Drops",
                                   "Capsules", "Inhalers", "Topical Medicines",
                                   "Syrups")
        searchtypemed.grid(row=2, column=1, sticky=W)
        searchtypemed.current(0)

        labelmedname = Label(DataFrameLeft, text="Medicine Name:",
                             font=("Lucida bright", 12, "bold"),
                             padx=2, pady=6)
        labelmedname.grid(row=3, column=0, sticky=W)

        combomedname = ttk.Combobox(DataFrameLeft, state="readonly",
                                    font=("Lucida bright", 12, "bold"), width=27)
        combomedname['value'] = ("nice", "novel")
        combomedname.current(0)
        combomedname.grid(row=3, column=1)

        labellotno = Label(DataFrameLeft, text="Lot No:",
                           font=("Lucida bright", 12, "bold"),
                           padx=2, pady=6)
        labellotno.grid(row=4, column=0, sticky=W)
        entlotno = Entry(DataFrameLeft, font=("Lucida bright", 12, "bold"),
                         bg="white", bd=2, relief=RIDGE, width=29)
        entlotno.grid(row=4, column=1)

        labelisssuedate = Label(DataFrameLeft, text="Issue Date:",
                                font=("Lucida bright", 12, "bold"),
                                padx=2, pady=6)
        labelisssuedate.grid(row=5, column=0, sticky=W)
        entissuedate = Entry(DataFrameLeft, font=("Lucida bright", 12, "bold"),
                             bg="white", bd=2, relief=RIDGE, width=29)
        entissuedate.grid(row=5, column=1)

        labelexdate = Label(DataFrameLeft, text="Expiry Date:",
                            font=("Lucida bright", 12, "bold"),
                            padx=2, pady=6)
        labelexdate.grid(row=6, column=0, sticky=W)

        entexpdate = Entry(DataFrameLeft, font=("Lucida bright", 12, "bold"),
                           bg="white", bd=2, relief=RIDGE, width=29)
        entexpdate.grid(row=6, column=1)

        labeluses = Label(DataFrameLeft, text="Uses:",
                          font=("Lucida bright", 12, "bold"),
                          padx=2, pady=6)
        labeluses.grid(row=7, column=0, sticky=W)

        entuses = Entry(DataFrameLeft, font=("Lucida bright", 12, "bold"),
                        bg="white", bd=2, relief=RIDGE, width=29)
        entuses.grid(row=7, column=1)

        labelsideeff = Label(DataFrameLeft, text="Side Effects:",
                             font=("Lucida bright", 12, "bold"),
                             padx=2, pady=6)
        labelsideeff.grid(row=8, column=0, sticky=W)

        entsideeff = Entry(DataFrameLeft, font=("Lucida bright", 12, "bold"),
                           bg="white", bd=2, relief=RIDGE, width=29)
        entsideeff.grid(row=8, column=1)

        labelprewarn = Label(DataFrameLeft, text="Warnings:",
                             font=("Lucida bright", 12, "bold"),
                             padx=2, pady=6)
        labelprewarn.grid(row=0, column=2, sticky=W)

        entprewarn = Entry(DataFrameLeft, font=("Lucida bright", 12, "bold"),
                           bg="white", bd=2, relief=RIDGE, width=29)
        entprewarn.grid(row=0, column=3)

        labeldosage = Label(DataFrameLeft, text="Dosage:",
                            font=("Lucida bright", 12, "bold"),
                            padx=2, pady=6)
        labeldosage.grid(row=1, column=2, sticky=W)

        entdosage = Entry(DataFrameLeft, font=("Lucida bright", 12, "bold"),
                          bg="white", bd=2, relief=RIDGE, width=29)
        entdosage.grid(row=1, column=3)

        labelprice = Label(DataFrameLeft, text="Price:",
                           font=("Lucida bright", 12, "bold"),
                           padx=2, pady=6)
        labelprice.grid(row=2, column=2, sticky=W)

        entprice = Entry(DataFrameLeft, font=("Lucida bright", 12, "bold"),
                         bg="white", bd=2, relief=RIDGE, width=29)
        entprice.grid(row=2, column=3)

        labelProduct = Label(DataFrameLeft, text="Product QT:",
                             font=("Lucida bright", 12, "bold"),
                             padx=2, pady=6)
        labelProduct.grid(row=3, column=2, sticky=W)

        entProduct = Entry(DataFrameLeft, font=("Lucida bright", 12, "bold"),
                           bg="white", bd=2, relief=RIDGE, width=29)
        entProduct.grid(row=3, column=3)

        # *****************IMAGES**************

        labelhome = Label(DataFrameLeft, text="Stay FIT Stay HEALTHY!!",
                          font=("Lucida bright", 12, "bold"),
                          padx=12, pady=3, bg="white", fg="darkgreen",
                          width=35)
        labelhome.place(x=470, y=140)

        img2 = Image.open("C:\src\projects\Amogh\pharmacy\pic2logo.png")
        img2 = img2.resize((130, 130), Image.Resampling.LANCZOS)
        self.photoimage2 = ImageTk.PhotoImage(img2)
        button2 = Button(self.root, image=self.photoimage2, borderwidth=4)
        button2.place(x=525, y=333)

        img3 = Image.open("C:\src\projects\Amogh\pharmacy\pic3logo.png")
        img3 = img3.resize((130, 130), Image.Resampling.LANCZOS)
        self.photoimage3 = ImageTk.PhotoImage(img3)
        button3 = Button(self.root, image=self.photoimage3, borderwidth=4)
        button3.place(x=655, y=333)

        img4 = Image.open("C:\src\projects\Amogh\pharmacy\piclogo4.jfif")
        img4 = img4.resize((125, 130), Image.Resampling.LANCZOS)
        self.photoimage4 = ImageTk.PhotoImage(img4)
        button4 = Button(self.root, image=self.photoimage4, borderwidth=4)
        button4.place(x=785, y=333)

        # *******************DATAFRAMERIGHT************************

        DataFrameRight = LabelFrame(DataFrame, bd=10, relief=RIDGE, padx=20, text
        ="Add Medicinal Department", fg="Navyblue"
                                    , font=('Lucida Bright', 13, "bold"))
        DataFrameRight.place(x=910, y=5, width=550, height=350)

        img5 = Image.open("C:\src\projects\Amogh\pharmacy\piclogo5.jfif")
        img5 = img5.resize((170, 75), Image.Resampling.LANCZOS)
        self.photoimage5 = ImageTk.PhotoImage(img5)
        button5 = Button(self.root, image=self.photoimage5, borderwidth=4)
        button5.place(x=960, y=165)

        img6 = Image.open("C:\src\projects\Amogh\pharmacy\piclogo6.jfif")
        img6 = img6.resize((170, 75), Image.Resampling.LANCZOS)
        self.photoimage6 = ImageTk.PhotoImage(img6)
        button6 = Button(self.root, image=self.photoimage6, borderwidth=4)
        button6.place(x=1130, y=165)

        img7 = Image.open("C:\src\projects\Amogh\pharmacy\piclogo7.jfif")
        img7 = img7.resize((170, 145), Image.Resampling.LANCZOS)
        self.photoimage7 = ImageTk.PhotoImage(img7)
        button7 = Button(self.root, image=self.photoimage7, borderwidth=4)
        button7.place(x=1300, y=165)

        labelrefnum = Label(DataFrameRight, text="Reference No:",
                            font=("Lucida bright", 12, "bold"),
                            padx=4, pady=6)
        labelrefnum.place(x=0, y=85)

        entref = Entry(DataFrameRight, textvariable=self.refMed_var, font=("Lucida bright", 12, "bold"),
                       bg="white", bd=2, relief=RIDGE, width=14)
        entref.place(x=145, y=90)

        labelmednaming = Label(DataFrameRight, text="Medicine Name:",
                               font=("Lucida bright", 12, "bold"),
                               padx=4, pady=6)
        labelmednaming.place(x=0, y=115)

        entmed = Entry(DataFrameRight, textvariable=self.addmed_var, font=("Lucida bright", 12, "bold"),
                       bg="white", bd=2, relief=RIDGE, width=14)
        entmed.place(x=145, y=120)

        # ******************SIDEFRAME****************************

        sideframe = Frame(DataFrameRight, bd=4, relief=RIDGE,
                          bg="white")
        sideframe.place(x=0, y=150, width=290, height=160)

        sc_x = ttk.Scrollbar(sideframe, orient=HORIZONTAL)
        sc_x.pack(side=BOTTOM, fill=X)
        sc_y = ttk.Scrollbar(sideframe, orient=VERTICAL)
        sc_y.pack(side=RIGHT, fill=Y)

        self.medicine_table = ttk.Treeview(sideframe, column=("Ref No.", "Med Name")
                                           , xscrollcommand=sc_x.set,
                                           yscrollcommand=sc_y.set)
        sc_x.config(command=self.medicine_table.xview)
        sc_y.config(command=self.medicine_table.yview)

        self.medicine_table.heading("Ref No.", text="Ref No.")
        self.medicine_table.heading("Med Name", text="Medicine Name")

        self.medicine_table["show"] = "headings"
        self.medicine_table.pack(fill=BOTH, expand=1)

        self.medicine_table.column("Ref No.", width=100)
        self.medicine_table.column("Med Name", width=100)


        # ************MEDICINE FUNCTIONALITY****************
        def AddMed(self):
            conn = mysql.connector.connect(host="localhost",username="root",
                                           password="Amogh@123",
                                           database="pharmeasy")
            my_cursor = conn.cursor()
            my_cursor.execute("insert into pharma(Ref,MedName) values(%s,%s)",
                              (
                                  self.refMed_var.get(),
                                  self.addmed_var.get()

                              ))

            conn.commit()
            conn.close()
            messagebox.showinfo("Success", "Medicine Added")



        # ********************MEDICINE ADD**********************

        down_frame = Frame(DataFrameRight, bd=4, relief=RIDGE, bg="skyblue")
        down_frame.place(x=330, y=165, width=165, height=150)

        btnAddmed = Button(down_frame, text="Add Medicine", font=(
            "Lucida bright", 12, "bold"), width=15
                           , pady=2, bg="white", fg="navyblue")
        btnAddmed.grid(row=0, column=0)




        btnupdatemed = Button(down_frame, text="Update Medicine", font=(
            "Lucida bright", 12, "bold"), width=15
                              , pady=2, bg="white", fg="navyblue")
        btnupdatemed.grid(row=1, column=0)

        btndeletemed = Button(down_frame, text="Delete Medicine", font=(
            "Lucida bright", 12, "bold"), width=15
                              , pady=2, bg="white", fg="navyblue")
        btndeletemed.grid(row=2, column=0)

        btnclearmed = Button(down_frame, text="Clear Medicine", font=(
            "Lucida bright", 12, "bold"), width=15
                             , pady=2, bg="white", fg="navyblue")
        btnclearmed.grid(row=3, column=0)
        # *************MAIN TABLE AND SCROLL********************
        Table_frame = Frame(DetailsFrame, bd=10, relief=RIDGE)
        Table_frame.place(x=0, y=1, width=1500, height=170)

        sc_x = ttk.Scrollbar(Table_frame, orient=HORIZONTAL)
        sc_x.pack(side=BOTTOM, fill=X)
        sc_y = ttk.Scrollbar(Table_frame, orient=VERTICAL)
        sc_y.pack(side=RIGHT, fill=Y)

        self.pharmacy_table = ttk.Treeview(Table_frame, column=("Reg."
                                                                , "companyname", "type", "tabletname", "lotno",
                                                                "issuedate",
                                                                "expdate", "uses", "sideeffect", "warning", "dosage",
                                                                "price", "productqt")
                                           , xscrollcommand=sc_x.set,
                                           yscrollcommand=sc_y.set)
        sc_x.pack(side=BOTTOM, fill=X)
        sc_y.pack(side=RIGHT, fill=Y)

        sc_x.config(command=self.pharmacy_table.xview)
        sc_y.config(command=self.pharmacy_table.yview)

        self.pharmacy_table["show"] = "headings"

        self.pharmacy_table.heading("Reg.", text="Reference No.")
        self.pharmacy_table.heading("companyname", text="Company Name")
        self.pharmacy_table.heading("type", text="Type of Medicine")
        self.pharmacy_table.heading("tabletname", text="Tablet Name")
        self.pharmacy_table.heading("lotno", text="Lot No.")
        self.pharmacy_table.heading("issuedate", text="Issue Date")
        self.pharmacy_table.heading("expdate", text="Expiry Date")
        self.pharmacy_table.heading("uses", text="Uses")
        self.pharmacy_table.heading("sideeffect", text="Side Effects")
        self.pharmacy_table.heading("warning", text="Pre and Warnings")
        self.pharmacy_table.heading("dosage", text="Dosage")
        self.pharmacy_table.heading("price", text="Price")
        self.pharmacy_table.heading("productqt", text="Product QT")
        self.pharmacy_table.pack(fill=BOTH, expand=1)
        self.pharmacy_table.column("Reg.", width=100)
        self.pharmacy_table.column("companyname", width=100)
        self.pharmacy_table.column("type", width=100)
        self.pharmacy_table.column("tabletname", width=100)
        self.pharmacy_table.column("lotno", width=100)
        self.pharmacy_table.column("issuedate", width=100)
        self.pharmacy_table.column("expdate", width=100)
        self.pharmacy_table.column("uses", width=100)
        self.pharmacy_table.column("sideeffect", width=100)
        self.pharmacy_table.column("warning", width=100)
        self.pharmacy_table.column("dosage", width=100)
        self.pharmacy_table.column("price", width=100)
        self.pharmacy_table.column("productqt", width=100)










if __name__ == "__main__":
    root = Tk()
    obj = PharamacyManagementSystem(root)
    root.mainloop()
