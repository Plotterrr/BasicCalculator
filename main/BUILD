load("@rules_cc//cc:defs.bzl", "cc_binary")

cc_library(
    name = "Calculation",
    src = ["Calculation.cc"],
    hdrs = ["Calculation.h"],
)

cc_binary(
    name = "main",
    size="small",
    srcs = ["main.cc"],
    deps=[":Calculation","@com_google_googletest//g:test_main"],

)

cc_test(
    name ="",
    srcs=[],
    deps=[],
)
