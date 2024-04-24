module.exports = grammar({
    name: 'gherkin',

    rules: {
        source_file: $ => repeat1($.feature_definition),

        feature_definition: $ => seq(
            'Feature:',
            ' ',
            $.identifier
        ),

        identifier: $ => /([A-z]| )+/
    }
})