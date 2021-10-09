tests = [ {'description': '0',
    'steps': [ {'inputs': [('PINA',0x00)], 'iterations': 5 } ],
    'expected': [('PORTB',0x00)],
    },
    {'description':  '1',
    'steps': [ {'inputs': [('PINA',0x01)], 'iterations': 5 } ],
    'expected': [('PORTB',0x01)],
    },
    {'description': '2',
    'steps': [ {'inputs': [('PINA',0x02)], 'iterations': 5 } ],
    'expected': [('PORTB',0x00)],
    },
    {'description': '3',
    'steps': [ {'inputs': [('PINA',0x03)], 'iterations': 5 } ],
    'expected': [('PORTB',0x00)],
    },
    {'description': 'misc',
    'steps': [ {'inputs': [('PINA',0xC6)], 'iterations': 5 } ],
    'expected': [('PORTB',0x00)],
    },
 
    ]

#watch = ['PORTB']

