import hw39

john = hw39.employee("John","Johnson","Manager","2016-12-31")
tou = hw39.employee("Tou","Xiong","Software Engineer","2016-10-25")
mich = hw39.employee("Michaela","Michaelson","District Manager","2013-12-19")
jake = hw39.employee("Jake","Jacobson","Programmer")
jacq = hw39.employee("Jacquelyn","Jackson","DBA")
sally = hw39.employee("Sally","Weber","Web developer","2015-12-18")
john._set_sort(tou)
john._set_sort(mich)
john._set_sort(jake)
john._set_sort(jacq)
john._set_sort(sally)
john.show()
