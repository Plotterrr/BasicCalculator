load("@rules_cc//cc:defs.bzl","cc_library" ,"cc_binary", "cc_test")

cc_library(
    name = "Calculation",
    srcs = ["Calculation.cc"],
    hdrs = ["Calculation.h"],
)

cc_binary(
    name = "main",
    srcs = ["main.cc"],
    deps=[":Calculation"],

)

cc_test(
 name = "test",
 size = "small",
 srcs = ["test.cpp"],
 deps = [":Calculation",":main","@com_google_googletest//:gtest_main"],
# deps = ["@com_google_googletest//:gtest_main"],
)

